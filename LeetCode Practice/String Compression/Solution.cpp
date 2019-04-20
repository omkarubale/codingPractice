class Solution
{
private:
    vector<char> convertIntToChars(int n)
    {
        vector<char> result;
        while (n > 0)
        {
            result.emplace_back(48 + n % 10);
            n /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }

public:
    int compress(vector<char> &chars)
    {
        int i = 0, j = 0, extra = 0;

        while (j < chars.size())
        {
            int count = 0;
            chars[i] = chars[j];
            while (j < chars.size() && chars[i] == chars[j])
            {
                j++;
                count++;
            }
            i++;

            if (count == 2)
            {
                chars[i] = '2';
                i++;
            }
            else if (count > 2)
            {
                vector<char> number(convertIntToChars(count));
                int k;
                for (k = 0; k < number.size(); k++)
                {
                    chars[i] = number[k];
                    i++;
                    cout << chars[i] << " : " << i << "\n";
                }
                extra += count - 2 - (k - 1);
            }
        }
        return chars.size() - extra;
    }
};