class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0) return true;
        if(flowerbed.size() == 1) return flowerbed[0] == 0;
        int zeroCounter = 0, flowerCounter = 0;
        int start = 0;
        for(start = 0;start < flowerbed.size() && flowerbed[start] == 0; start++);

        flowerCounter += start >= 2 ?
                    1 + (start-2)/2
                    : 0;
        if(flowerCounter >= n) return true; 

        if(start == flowerbed.size()) flowerCounter += start % 2;
        for(int i = start; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 1)
            {
                flowerCounter += zeroCounter >= 3 ?
                    1 + (zeroCounter-3)/2
                    : 0;
                
                if(flowerCounter >= n) return true; 

                zeroCounter = 0;
                continue;
            }
            zeroCounter++;
        }

        flowerCounter += zeroCounter >= 2 ?
                    1 + (zeroCounter-2)/2
                    : 0;
        
        return flowerCounter >= n;
    }
};