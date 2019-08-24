class Solution {
public:
    int getGrey(vector<vector<int>>& M, int i, int j)
    {
        int result = 0, 
        startV = i == 0 ? 0 : i - 1, 
        startH = j == 0 ? 0 : j - 1, 
        endV = i == M.size() - 1 ? M.size() - 1 : i + 1, 
        endH = j == M[0].size() - 1 ? M[0].size() - 1 : j + 1;
        
        for(int a = startV; a <= endV; a++)
            for(int b = startH; b <= endH; b++)
                result += M[a][b];
        
        return result / ((endV - startV + 1)*(endH - startH + 1));
    }
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> result(M.size(), vector<int>(M[0].size(), 0));
        
        for(int i = 0; i < M.size(); i++)
            for(int j = 0; j < M[0].size(); j++)
                result[i][j] = getGrey(M, i, j);
        
        return result;
    }
};