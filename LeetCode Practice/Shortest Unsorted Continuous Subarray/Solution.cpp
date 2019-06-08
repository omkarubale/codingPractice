class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        
        int i, start = nums.size(), end = 0;
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] != sorted[i])
            {
                start = min(start, i);
                end = max(end, i);
            }
        }

        return (end-start >= 0 ? end - start +1 : 0);
    }
};