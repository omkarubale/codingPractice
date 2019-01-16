class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        while(digits[i] == 9 && i>-1)
        {
            digits[i]=0;
            i--;
        }
        if(i > -1)
        {
            digits[i]+=1;
            return digits;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};