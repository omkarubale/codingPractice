class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        if (numRows == 0)
            return result;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1);
            result.emplace_back(row);
            for (int j = 1; j < i; j++)
                result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
        }
        return result;
    }
};