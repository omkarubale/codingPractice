class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size() == 0 || nums.size() * nums[0].size() != r * c) return nums;
        
        int rCounter = 0, cCounter = 0;
        vector<vector<int>> result(r, vector<int> (c,0));

        for(auto row : nums)
        {
            for(auto item : row)
            {
                if(cCounter == c) 
                {
                    rCounter++;
                    cCounter = 0;
                }
                
                result[rCounter][cCounter] = item;
                cCounter++;
            }
        }
        return result;
    }
};