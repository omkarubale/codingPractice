class Solution {
public:
    int reverse(int x) {
        int y= 0,tmp;
        while(x!=0) {
            tmp = y*10 + x%10;
            if((x > 0 && y > tmp/10)) return 0;
            if(x < 0 && y < tmp/10) return 0;
            y = tmp;
            x = x/10;
        }
         return y;
    }
};