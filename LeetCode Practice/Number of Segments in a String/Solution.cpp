class Solution
{
public:
    int countSegments(string s)
    {
        if (s.size() == 0)
            return 0;
        int counter = 0;
        bool ready = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                ready = true;
            if (ready && s[i] == ' ')
            {
                counter++;
                ready = false;
            }
        }
        return counter + ready;
    }
};