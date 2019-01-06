class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";

        string result = "";
        char current = strs[0][0];
        
        for(int i = 0; i < strs[0].length(); i++)
        {
            current = strs[0][i];
            for(auto itr = strs.begin(); itr != strs.end(); itr++)
                if(current != (*itr)[i] || (*itr)[i] == '\0')
                    return result;
            result += current;
        }
        return result;
    }
};