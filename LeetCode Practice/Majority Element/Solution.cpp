class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] > nums.size() / 2)
                return nums[i];
        }
        return 0;
    }
};