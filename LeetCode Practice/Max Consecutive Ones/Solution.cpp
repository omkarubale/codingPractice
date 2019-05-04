class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int counter = 0, maxCounter = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                counter++;
            else
                counter = 0;

            if (maxCounter < counter)
                maxCounter = counter;
        }
        return maxCounter;
    }
};