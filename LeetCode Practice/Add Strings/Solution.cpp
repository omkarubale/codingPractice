class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string result = "";
        int i = 0, sum = 0;
        
        for(i = 0; i < max(num1.size(), num2.size()); i++)
        {
            sum = carry + ((i < num1.size()) ? num1[num1.size() - i -1] - '0' : 0) + ((i < num2.size()) ? num2[num2.size() - i -1] - '0' : 0);
            result = to_string(sum%10) + result;
            carry = sum/10;
        }
        if(carry != 0)
            result = to_string(carry) + result;
        
        return result;
    }
};