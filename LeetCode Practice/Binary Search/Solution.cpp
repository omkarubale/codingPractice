class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int start, int end)
    {
        if(end - start < 0) return -1;
        
        int mid = start + (end - start)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return binarySearch(nums, target, mid + 1, end);
        return binarySearch(nums, target, start, mid - 1);
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};