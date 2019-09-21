class Solution {
public:
    bool isSelfDividing(int number)
    {
        int divisor, currentNumber = number;
        while(currentNumber > 0)
        {
            divisor = currentNumber % 10;
            if((divisor == 0 && currentNumber != 0) || number % divisor != 0) return false;
            currentNumber /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++)
            if(isSelfDividing(i)) result.emplace_back(i);
        return result;
    }
};