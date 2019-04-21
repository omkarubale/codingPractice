class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gL = g.size(), sL = s.size(), result = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int gC = 0, sC = 0;
        
        while(gC < gL && sC < sL)
        {
            if(g[gC] <= s[sC])
            {
                gC++;
                sC++;
                result++;
            }
            else
            {
                sC++;
            }
        }
        return result;
    }
};