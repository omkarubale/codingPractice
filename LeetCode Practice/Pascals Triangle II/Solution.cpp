class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(rowIndex + 1, 1);

        for (int i = 0; i < rowIndex + 1; i++)
        {
            int temp1 = 1;
            int temp2 = 1;
            for (int j = 1; j < i; j++)
            {
                temp1 = result[j];
                result[j] = result[j] + temp2;
                temp2 = temp1;
            }
        }
        return result;
    }
};