class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        
        for(int i = 0; i < numbers.size(); i++)
        {
            if(m.find(target - numbers[i]) != m.end())
            {
                result.emplace_back(m[target-numbers[i]]+1);
                result.emplace_back(i+1);
                return result;
            }
            
            m[numbers[i]] = i;
        }
        return result;
    }
};