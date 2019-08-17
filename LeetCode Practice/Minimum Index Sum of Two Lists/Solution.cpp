class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        unordered_map<string, int> m1;
        int min = INT_MAX;
        
        for(int i = 0; i != list1.size(); i++)
            m1[list1[i]] = i + 1;

        for(int i = 0; i != list2.size(); i++)
        {
            
            if(m1.find(list2[i]) != m1.end())
            {
                if(m1[list2[i]] + i == min)
                {
                    result.emplace_back(list2[i]);
                }
                else if(m1[list2[i]] + i < min)
                {
                    min = m1[list2[i]] + i;
                    result.clear();
                    result.emplace_back(list2[i]);
                }
            }
        }
        return result;
    }
};