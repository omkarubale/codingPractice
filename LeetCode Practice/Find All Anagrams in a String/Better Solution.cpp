class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> charsS(26, 0), charsP(26, 0), result;
        if (s.size() < p.size())
            return result;
        int l2 = p.size();

        for (int i = 0; i < p.size(); i++)
        {
            charsP[p[i] - 'a']++;
            charsS[s[i] - 'a']++;
        }

        if (charsS == charsP)
            result.emplace_back(0);

        for (int i = l2; i < s.size(); ++i)
        {
            ++charsS[s[i] - 'a'];
            --charsS[s[i - l2] - 'a'];
            if (charsS == charsP)
                result.emplace_back(i - l2 + 1);
        }
        return result;
    }
};