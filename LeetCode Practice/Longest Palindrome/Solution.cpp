class Solution
{
  public:
    int longestPalindrome(string s)
    {
        unordered_map<char, bool> m;
        int counter = 0;
        bool oddChar = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == true)
            {
                m[s[i]] = false;
                counter += 2;
                continue;
            }

            m[s[i]] = true;
        }

        for (pair<char, bool> element : m)
        {
            if (element.second)
                oddChar = true;
        }

        return (oddChar) ? counter + 1 : counter;
    }
};