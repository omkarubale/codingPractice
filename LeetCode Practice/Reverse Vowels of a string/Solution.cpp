class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;
        unordered_map<char, bool> m;
        m['a'] = true;
        m['e'] = true;
        m['i'] = true;
        m['o'] = true;
        m['u'] = true;
        m['A'] = true;
        m['E'] = true;
        m['I'] = true;
        m['O'] = true;
        m['U'] = true;
        while(i < j)
        {
            while((i < j) && m[s[i]] == false)
                i++;
            while((i < j) && m[s[j]] == false)
                j--;
            if(i == j)
                break;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};