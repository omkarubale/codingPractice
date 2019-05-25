class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;
        unordered_map<int, int> m;
        vector<int> uniqueNums;
        int result = 0, decider = k == 0 ? 1 : 0;
        
        for(int i = 0; i< nums.size(); i++)
            if(m[nums[i]]++ == 0) uniqueNums.emplace_back(nums[i]);

        sort(uniqueNums.begin(), uniqueNums.end());
        
        for(int i = 0; i < uniqueNums.size(); i++)
            if(m[uniqueNums[i]+k] > decider) result++;
        
        return result;
    }
};