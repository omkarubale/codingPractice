class Solution
{
  public:
    bool isPalindrome(string s)
    {
        if (s.length() <= 1)
            return true;

        int count = 0;
        for (int i = 0; s[i]; i++)
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
                s[count++] = s[i];

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < count / 2; i++)
            if (s[i] != s[count - i - 1])
                return false;

        return true;
    }
};