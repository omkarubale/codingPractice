class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = 0;
        if(nums[0] > target) return 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == target) return i;
            else if(nums[i] < target) pos = i;
            else return pos+1;
        return pos+1;
    }
};