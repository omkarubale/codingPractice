class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        for( i = 0; i*i < x; i++);
        if(i*i > x) i--;
        return i;
    }
};