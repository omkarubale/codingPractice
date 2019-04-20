class Solution
{
public:
    int arrangeCoins(int n)
    {
        int result = 0;
        while (result < n)
        {
            result++;
            n -= result;
        }
        return result;
    }
};