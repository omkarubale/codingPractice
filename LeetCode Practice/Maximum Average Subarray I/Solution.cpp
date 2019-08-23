class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = accumulate(nums.begin(), nums.begin() + k, 0.0);
        double current = max;
        for(int i = k; i < nums.size(); i++)
        {
            current += (nums[i] - nums[i-k]);
            if(current > max) max = current;
        }
        return max/(double)k;
    }
};