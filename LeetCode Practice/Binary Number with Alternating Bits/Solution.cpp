class Solution {
public:
    bool hasAlternatingBits(int n) {
        int currentCheck = n % 2 == 0 ? 0 : 1;
        while(n > 0)
        {
            if(n % 2 != currentCheck)
                return false;
            currentCheck = n % 2 == 0 ? 1 : 0;
                n /= 2;
        }
        return true;
    }
};