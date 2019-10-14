class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> traverse(cost.size() + 1);
        
        for(int i = 2; i < traverse.size(); i++)
            traverse[i] = min(traverse[i-1] + cost[i-1], traverse[i-2] + cost[i-2]);
        
        return traverse[cost.size()];
    }
};