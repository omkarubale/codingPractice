class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0, leftSum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        for (int i = 0; i < nums.size(); i++)
        {
            leftSum += nums[i];
            if (leftSum - nums[i] == sum - leftSum)
                return i;
        }
        return -1;
    }
};