class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> result;
        if (s.size() < p.size())
            return result;
        int l2 = p.size();

        unordered_map<char, int> charsP;

        for (int i = 0; i < p.size(); i++)
            charsP[p[i]]++;

        for (int i = 0; i < s.size(); i++)
        {
            int j = 0;
            unordered_map<char, int> charsS(charsP);
            while (j < l2)
            {
                if (charsS[s[i + j]] > 0)
                    charsS[s[i + j]]--;
                else
                    break;
                j++;
            }
            if (j == l2)
                result.emplace_back(i);
        }
        return result;
    }
};