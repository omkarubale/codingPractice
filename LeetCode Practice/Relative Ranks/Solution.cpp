class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        int n = nums.size();
        vector<string> result(n, "");
        unordered_map<int,int> positions;
        
        for(int i = 0; i < n; i++)
            positions[nums[i]] = i;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++)
        {
            if(n-i > 3)
                result[positions[nums[i]]] = to_string(n-i);
            else if(n-i == 1)
                result[positions[nums[i]]] = "Gold Medal";
            else if(n-i == 2)
                result[positions[nums[i]]] = "Silver Medal";
            else if(n-i == 3)
                result[positions[nums[i]]] = "Bronze Medal";
        }
        return result;
    }
};