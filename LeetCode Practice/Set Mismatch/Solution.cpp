class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int omit, repeat;
        vector<bool> checker(nums.size(), false);
        
        for(int i = 0; i < nums.size(); i++)
            if(checker[nums[i]-1] == true)
                repeat = nums[i];
            else
                checker[nums[i]-1] = true;
        
        for(int i = 0; i < nums.size(); i++)
            if(checker[i] == false)
                omit = i + 1;
        
        vector<int> result{repeat, omit};
        return result;
    }
};