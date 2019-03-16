class Solution {
public:
    bool wordPattern(string pattern, string str) {
       istringstream strcin(str);
        string s;
        vector<string> vs;
        while(strcin >> s) vs.push_back(s);
        
        if(vs.size() != pattern.length()) return false;
        
        map<char, string> c2s;
        map<string, char> s2c;
        
        for (int i = 0; i < vs.size(); ++i) {
            if (s2c[vs[i]] == 0 && c2s[pattern[i]] == "") { 
                s2c[vs[i]] = pattern[i]; 
                c2s[pattern[i]] = vs[i]; 
                continue; 
            }
            if (s2c[vs[i]] != pattern[i]) return false;
        }
        
        return true;
    }
};