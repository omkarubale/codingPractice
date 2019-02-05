class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int minBuy = INT_MAX;
        int profitMax = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (minBuy > prices[i])
                minBuy = prices[i];
            if (profitMax < prices[i] - minBuy)
                profitMax = prices[i] - minBuy;
        }

        return profitMax;
    }
};