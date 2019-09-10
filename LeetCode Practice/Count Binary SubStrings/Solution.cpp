class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.size() < 2) return 0;
        int counter = 0, i = 0, zeroStack = 0, oneStack = 0;
        
        while(i < s.size())
        {
            if(s[i] == '0')
            {
                zeroStack = 0;
                while(i < s.size() && s[i] == '0') i++, zeroStack++;
            }
            else
            {
                oneStack = 0;
                while(i < s.size() && s[i] == '1') i++, oneStack++;
            }

            counter += min(oneStack, zeroStack);
        }
        return counter;
    }
};