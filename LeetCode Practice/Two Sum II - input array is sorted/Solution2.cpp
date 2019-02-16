class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        
        int start = 0;
        int end = numbers.size() -1;
        
        while(end>start)
        {
            int checker = numbers[start] + numbers[end];
            if(checker == target)
            {
                result.emplace_back(start+1);
                result.emplace_back(end+1);
                return result;
            }
            else if(checker > target)
                end--;
            else
                start++;
        }
        return result;
    }
};