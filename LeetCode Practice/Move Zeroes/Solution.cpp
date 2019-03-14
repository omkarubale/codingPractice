class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        int moved = 0, i = 0;
        while (moved < nums.size())
        {
            if (nums[moved] != 0)
            {
                nums[i] = nums[moved];
                i++;
            }
            moved++;
        }

        for (int j = i; j < nums.size(); j++)
            nums[j] = 0;
    }
};