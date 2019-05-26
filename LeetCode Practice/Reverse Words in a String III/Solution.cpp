class Solution
{
public:
    string reverseWords(string s)
    {
        int currentString = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] != ' ')
                currentString++;
            else
                reverse(s.begin() + i - currentString, s.begin() + i), currentString = 0;
        reverse(s.end() - currentString, s.end());
        return s;
    }
};