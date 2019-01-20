class Solution {
public:
    bool isPerfectSquare(int num) {
        double sqr = num;
        double delta = 0.0001;
        
        while(fabs(pow(sqr,2)) - num > delta)
            sqr = (sqr + num / sqr) / 2;
        
        int sqrt = (int) sqr;
        if(sqrt*sqrt == num)
            return true;
        return false;
    }
};