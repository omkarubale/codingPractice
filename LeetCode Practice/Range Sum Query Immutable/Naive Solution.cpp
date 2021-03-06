class NumArray
{
  public:
    vector<int> numbers;
    NumArray(vector<int> nums)
    {
        numbers = nums;
    }

    int sumRange(int i, int j)
    {
        int sum = 0;
        for (int a = i; a <= j; a++)
            sum += numbers[a];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */