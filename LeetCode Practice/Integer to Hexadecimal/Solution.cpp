class Solution
{
  public:
    string toHex(int num)
    {
        if (num == 0)
            return "0";
        if (num == -2147483648)
            return "80000000";
        unordered_map<int, char> hex;
        hex[0] = '0';
        hex[1] = '1';
        hex[2] = '2';
        hex[3] = '3';
        hex[4] = '4';
        hex[5] = '5';
        hex[6] = '6';
        hex[7] = '7';
        hex[8] = '8';
        hex[9] = '9';
        hex[10] = 'a';
        hex[11] = 'b';
        hex[12] = 'c';
        hex[13] = 'd';
        hex[14] = 'e';
        hex[15] = 'f';

        string result;
        bool negative = false;
        if (num < 0)
        {
            num = INT_MAX + num + 1;
            negative = true;
        }

        while (num != 0)
        {
            result = hex[num % 16] + result;
            num /= 16;
        }

        if (negative)
        {
            if (result[0] == '7')
                result[0] = 'f';
            if (result[0] == '6')
                result[0] = 'e';
            if (result[0] == '5')
                result[0] = 'd';
            if (result[0] == '4')
                result[0] = 'c';
            if (result[0] == '3')
                result[0] = 'b';
            if (result[0] == '2')
                result[0] = 'a';
            if (result[0] == '1')
                result[0] = '9';
            if (result[0] == '0')
                result[0] = '8';
        }

        return result;
    }
};