class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0) return 0;
        int i = s.length()-1;
        while(s[i] == ' ' && i > 0) i--;
        if(i==0 && s[i] == ' ') return 0;
        int end = i;
        while(s[i] != ' ' && i > 0)i--;
        return s[i]==' ' ? end-i : end+1-i;
    }
};