class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN; 
        int uniqueCounter = 0;
        unordered_map<int, bool> m;
        for(int i = 0; i  <nums.size(); i++)
        {
            if(nums[i] > max1 && !m[nums[i]])
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2 && !m[nums[i]])
            {
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i] > max3 && !m[nums[i]])
            {
                max3 = nums[i];
            }
            
            if(m[nums[i]] == false)
            {
                m[nums[i]] = true;
                uniqueCounter++;
            }
        }

        if(uniqueCounter >= 3)
            return max3;
        return max1;
    }
};