class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int min1 = INT_MAX, max1 = INT_MIN;
        bool flag = false;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] < nums[i-1]) flag = true;
            if(flag) min1 = min(min1, nums[i]);
        }
        flag = false;
        for(int i = nums.size()-2; i >= 0; i--)
        {
            if(nums[i] > nums[i+1]) flag = true;
            if(flag) max1 = max(max1, nums[i]);
        }
        int l, r;
        for(l = 0; l < nums.size(); l++)
            if(min1 < nums[l]) break;
        for(r = nums.size()-1; r >= 0; r--)
            if(max1 > nums[r]) break;
        
        return r-l < 0 ? 0 : r-l+1;
    }
};