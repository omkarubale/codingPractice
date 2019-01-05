class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman.emplace('I',1);
        roman.emplace('V',5);
        roman.emplace('X',10);
        roman.emplace('L',50);
        roman.emplace('C',100);
        roman.emplace('D',500);
        roman.emplace('M',1000);
        
        int count = 1, val = 0, result = roman[s.back()];
        
        for(int i = s.length() - 2; i>=0 ;--i)
            if(roman[s[i]] < roman[s[i+1]])
                result -= roman[s[i]];
            else
                result += roman[s[i]];
        
        return result;
    }
};