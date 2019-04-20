class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> numsTemp(nums.size() + 1, 0), result;
        for(int i = 0; i < nums.size(); i++)
            numsTemp[nums[i]]++;
        for(int i = 1; i < nums.size()+1; i++)
            if(numsTemp[i] == 0)
                result.emplace_back(i);
        return result;
    }
};