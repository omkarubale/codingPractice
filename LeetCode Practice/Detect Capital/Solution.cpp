class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag = 0;
        if(islower(word[0])) flag = -1;
        else if(isupper(word[0]) && (word.size() < 2 || isupper(word[1]))) flag = 1;
        
        for(int i = 1; i < word.size(); i++)
        {
            if(flag == -1 && isupper(word[i]))
                return false;
            else if(flag == 1 && islower(word[i]))
                return false;
            else if(flag == 0 && isupper(word[i]))
                return false;
        }
        return true;
    }
};