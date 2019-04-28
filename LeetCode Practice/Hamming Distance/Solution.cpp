class Solution {
public:
    int hammingDistance(int x, int y) {
        int result1 = x ^ y;
        int result2 = 0;
        while(result1 > 0)
        {
            result1 &= (result1-1);
            result2++;
        }
        return result2;
    }
};