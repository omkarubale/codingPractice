class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length()-1;
        int result = 0;
        for(int i = 0; i < s.length(); i++)
        {
            result += ((s[len]-'A')+1)*pow(26,i);
            len--;
        }
        return result;
    }
};