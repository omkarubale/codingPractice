class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> m;
        int max = 0;
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        if(m.size() < 2) return 0;
        for(auto itr = m.begin(); itr != m.end();itr++)
        {
            if(itr->second != 0)
            {
                int next = m[itr->first + 1];
                int result = itr->second + next;
                
                if(result > max && next != 0) max = result;
            }
        }
        return max;
    }
};