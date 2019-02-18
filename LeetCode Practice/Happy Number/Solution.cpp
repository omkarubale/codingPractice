class Solution {
public:
    bool isHappy(int n) {
        int temp = 0;
        while(n > 9)
        {
            temp = 0;
            while(n > 0)
            {
                temp += pow(n%10,2);
                n /= 10;
            }
            n = temp;
        }
        
        if(n == 1 || n == 7)
            return true;
        return false;
    }
};