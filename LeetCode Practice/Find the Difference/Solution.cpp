class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> letters(26, 0);
        
        for(int i = 0; i < s.size(); i++)
            letters[s[i] - 'a']++;
        
        for(int i = 0; i < t.size(); i++)
        {
            letters[t[i] - 'a']--;
            if(letters[t[i] - 'a'] == -1) return t[i];
        }
        return ' ';
    }
};