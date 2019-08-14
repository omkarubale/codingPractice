class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size() == 0 || nums.size() * nums[0].size() != r * c) return nums;
        
        int rCounter = 0, cCounter = 0;
        vector<vector<int>> result;
        vector<int> current;
        result.emplace_back(current);
        for(auto row : nums)
        {
            for(auto item : row)
            {
                if(cCounter == c) 
                {
                    vector<int> newCurrent;
                    result.emplace_back(newCurrent);
                    rCounter++;
                    cCounter = 0;
                }
                
                result[rCounter].emplace_back(item);
                cCounter++;
            }
        }
        return result;
    }
};