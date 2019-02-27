class Solution
{
  public:
    long double Log2(int number)
    {
        return log(number) / log(2);
    }

    bool isPowerOfTwo(int n)
    {
        return (n > 0) && Log2(n) == floor(Log2(n));
    }
};