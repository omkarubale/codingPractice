class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        if (grid.size() == 0 || grid[0].size() == 0)
            return 0;
        int result = 0, L = grid.size(), B = grid[0].size();
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < B; j++)
            {
                if (grid[i][j] == 1)
                {
                    if (i == 0 || grid[i - 1][j] == 0)
                        result++;
                    if (j == 0 || grid[i][j - 1] == 0)
                        result++;
                    if (i == L - 1 || grid[i + 1][j] == 0)
                        result++;
                    if (j == B - 1 || grid[i][j + 1] == 0)
                        result++;
                }
            }
        }
        return result;
    }
};