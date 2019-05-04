class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string result = "";
        int kCounter = 0;
        for(int i =  S.size() - 1; i >= 0; i--)
        {
            if(kCounter == K && S[i] != '-')
            {
                kCounter = 0;
                result += '-';
                
            }
            if(S[i] != '-')
            {
                kCounter++;
                if(S[i] > 90) S[i] -= 32;
                result += S[i];
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};