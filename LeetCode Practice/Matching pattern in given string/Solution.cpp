class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j, q = 997, h= 1, hayHash = 0, nedHash = 0, d=256;
        int hayL = haystack.length(); 
        int nedL = needle.length();
        if(!nedL) return 0;
        if(nedL > hayL || !hayL) return -1; 

        for(i = 0; i < nedL-1; i++) 
        {
            h = (h*d)%q;
            cout<<"h : "<<h<<"\n";
        }
        for(i = 0; i <nedL; i++ )
        {
            hayHash = (hayHash*d + haystack[i])%q;
            nedHash = (nedHash*d + needle[i])%q;
        }
        for(i = 0; i<hayL-nedL+1; i++)
        {
            if(nedHash == hayHash)
            {
                for(j = 0; j< nedL; j++)
                    if(haystack[i+j] != needle[j]) break;
                if(j==nedL) return i;
            }
            
            if(i < hayL - nedL)
                hayHash = (d*(hayHash - haystack[i]*h) + haystack[i+nedL])%q;
            if(hayHash < 0) hayHash += q;
        }
        return -1;
    }
};