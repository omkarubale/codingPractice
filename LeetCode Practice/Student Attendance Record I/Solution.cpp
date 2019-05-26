class Solution {
public:
    bool checkRecord(string s) {
        bool absent = false;
        int lateCount = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i]=='A')
            {
                if(absent) return false;
                absent = true;
                lateCount = 0;
            }
            else if(s[i]=='L')
            {
                lateCount++;
                if(lateCount>2) return false;
            }
            else
            {
                lateCount = 0;
            }
        }
        return true;
    }
};