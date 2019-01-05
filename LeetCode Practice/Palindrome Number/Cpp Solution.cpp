class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s(to_string(x));
        string x_str = s;
        reverse(s.begin(), s.end());
        if(s.compare(x_str) != 0)
            return false;
        return true;
    }
};