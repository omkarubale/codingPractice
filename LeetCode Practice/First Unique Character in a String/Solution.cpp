class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> letters(26, -1);
        for(int i = 0; i < s.size(); i++)
            letters[s[i] - 'a'] = i;
        
        for(int i = 0; i < s.size(); i++)
            if(letters[s[i] - 'a'] == i) return i;
            else letters[s[i] - 'a'] = -1;
        return -1;
    }
};