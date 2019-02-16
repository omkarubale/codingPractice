class Solution {
public:
    string convertToTitle(int n) {
        string output = "";
        int counter = 1;
        int current= 0;
        while(n > 0)
        {
            current = n%26 == 0 ? 25 :(n%26)-1;
            output = (char)('A'+ current) + output;
            n =(n%26 == 0) ? (n/26)-1 : n/26;
            
            counter++;
        }
        
        return output;
    }
};