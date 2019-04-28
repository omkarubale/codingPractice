class Solution
{
public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {
        int i = 0, j = 0, I = houses.size(), J = heaters.size();
        if (I == 0 || J == 0)
            return 0;
        int result = 0;
        vector<int> closest(houses.size(), 0);

        for (i = 0; i < I; i++)
        {
            int min = INT_MAX;
            for (j = 0; j < J; j++)
            {
                int current = houses[i] - heaters[j];
                if (current < 0)
                    current *= -1;
                if (min > current)
                    min = current;
            }
            closest[i] = min;
        }

        for (i = 0; i < I; i++)
        {
            if (closest[i] > result)
                result = closest[i];
        }
        return result;
    }
};