class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> asciiMap(256, -1);
        int start = -1, max = 0;
        
        for(int i = 0; i< s.length(); i++)
        {
            if(asciiMap[s[i]]>start)
                start = asciiMap[s[i]];
            asciiMap[s[i]]=i;
            max = std::max(max,i-start);
        }
        return max;
    }
};