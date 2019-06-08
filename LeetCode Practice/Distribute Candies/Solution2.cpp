class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int cSize = candies.size();
        set<int> s;
        
        for(int i = 0; i < cSize; i++)
            s.insert(candies[i]);

        return min((int)s.size(), cSize/2);
        
    }
};