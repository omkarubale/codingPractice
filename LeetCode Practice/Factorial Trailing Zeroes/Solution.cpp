class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        unsigned long fives = 5;
        while(fives <= n)
        {
            result += n/fives;
            fives *= 5;
        }
        return result;
    }
};