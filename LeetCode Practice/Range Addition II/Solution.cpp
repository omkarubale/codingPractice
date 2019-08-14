class Solution {
public:
    void update(vector<vector<int>> &pg, int r, int c)
    {
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                pg[i][j]++;
    }
    
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        vector<vector<int>> current(m, vector<int> (n, 0));
        
        for(auto op : ops)
            update(current, op[0], op[1]);
        
        int max = 0, counter = 0;
        for(int i = 0; i < current.size(); i++)
        {
            for(int j = 0; j < current[0].size(); j++)
            {
                if(current[i][j] > max)
                {
                    max = current[i][j];
                    counter = 1;
                }
                else if(current[i][j] == max)
                    counter++;
            }
        }
        return counter;
    }
};