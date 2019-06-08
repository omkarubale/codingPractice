class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int uniqueCounter = 0, cSize = candies.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < cSize; i++)
        {
            if(m[candies[i]] == 0)
                uniqueCounter++;
            m[candies[i]]++;
            if(uniqueCounter > cSize/2) return cSize/2;
        }
        return uniqueCounter > cSize/2 ? cSize/2 : uniqueCounter;
        
    }
};