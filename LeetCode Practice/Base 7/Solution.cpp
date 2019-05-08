class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string result = "";
        bool negative = num < 0;
        if(negative) num *= -1;
        while(num > 0)
        {
            result += to_string(num%7);
            num /= 7;
        }
        if(negative) result += '-';
        reverse(result.begin(),result.end());
        return result;
    }
};