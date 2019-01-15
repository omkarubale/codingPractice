class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        string current = result;
        string temp = "";
        unordered_map<string,string> m;
        m["1"] = "11";
        for(int i = 1, j = 0; i < n; i++, j = 0)
        {
            current = "";
            while(j < result.length())
            {
                int tempCount = j;
                while(result[j] == result[tempCount]) tempCount++;
                temp = result.substr(j, tempCount-j);
                if(m.find(temp) == m.end()) m[temp] = to_string(tempCount-j) + result[j];
                current += m[temp];
                j = tempCount;
            }
            result = current;
        }
        return result;
    }
};