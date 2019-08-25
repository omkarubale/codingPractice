class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int min = 0, current = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i-1] < nums[i]) current++;
            else current = 0;
            if(min < current) min = current;
        }
        return min + 1;
    }
};