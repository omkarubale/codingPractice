class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for(int i = 0; i< s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else
            {
                if(stack.empty())
                    return false;
                if(stack.top() == '(' && s[i] == ')')
                    stack.pop();
                else if(stack.top() == '{' && s[i] == '}' && !stack.empty())
                    stack.pop();
                else if(stack.top() == '[' && s[i] == ']' && !stack.empty())
                    stack.pop();
                else
                    return false;
            }
        }
        
        if(!stack.empty())
            return false;
        return true;
    }
};