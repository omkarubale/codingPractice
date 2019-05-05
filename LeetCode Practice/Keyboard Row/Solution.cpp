class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, int> rows;
        vector<string> result;
        rows['q'] = 1;
        rows['w'] = 1;
        rows['e'] = 1;
        rows['r'] = 1;
        rows['t'] = 1;
        rows['y'] = 1;
        rows['u'] = 1;
        rows['i'] = 1;
        rows['o'] = 1;
        rows['p'] = 1;

        rows['a'] = 2;
        rows['s'] = 2;
        rows['d'] = 2;
        rows['f'] = 2;
        rows['g'] = 2;
        rows['h'] = 2;
        rows['j'] = 2;
        rows['k'] = 2;
        rows['l'] = 2;

        rows['z'] = 3;
        rows['x'] = 3;
        rows['c'] = 3;
        rows['v'] = 3;
        rows['b'] = 3;
        rows['n'] = 3;
        rows['m'] = 3;

        for (int i = 0; i < words.size(); i++)
        {
            int row = rows[tolower(words[i][0])];
            bool flag = true;

            for (int j = 0; j < words[i].size(); j++)
            {
                if (rows[tolower(words[i][j])] != row)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                result.emplace_back(words[i]);
        }
        return result;
    }
};