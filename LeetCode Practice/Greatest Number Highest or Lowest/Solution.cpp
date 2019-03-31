// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;
        
        while(start < end)
        {
            int middle = ((end-start)/2) + start;
            int guessResult = guess(middle);
            if(guessResult == 0) return middle;
            if(guessResult > 0) start = middle + 1;            
            if(guessResult < 0) end = middle - 1;
        }
        return end;
    }
    
};