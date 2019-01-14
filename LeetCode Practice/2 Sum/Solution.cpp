class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int count = 0;
        
        for(auto itr = nums.begin(); itr!=nums.end(); itr++, count++)
        {
            if(m.find(target-(*itr))!=m.end())
            {
                vector<int> result {m[target-(*itr)], count};
                return result;
            }
            m[(*itr)] = count;
        }
        
        vector<int> result;
        return result;
    }
};