class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int cSize = candies.size();
        int count = 1;
        sort(candies.begin(), candies.end());
        for(int i = 1; i < cSize && count < cSize; i++)
            if(candies[i-1] < candies[i]) count++; 

        return min(count, cSize/2);
        
    }
};