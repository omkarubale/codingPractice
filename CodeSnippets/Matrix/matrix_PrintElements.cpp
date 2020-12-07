void printMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size();
    if(n == 0) return;
    int m = matrix[0].size();
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}