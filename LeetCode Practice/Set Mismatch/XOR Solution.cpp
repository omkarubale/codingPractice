class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xorMain = 0, xor0 = 0, xor1 = 0;
        for (int n : nums)
            xorMain ^= n;
        for (int i = 1; i <= nums.size(); i++)
            xorMain ^= i;
        int rightmostbit = xorMain & ~(xorMain - 1);
        for (int n : nums) {
            if ((n & rightmostbit) != 0)
                xor1 ^= n;
            else
                xor0 ^= n;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if ((i & rightmostbit) != 0)
                xor1 ^= i;
            else
                xor0 ^= i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == xor0)
            {
                vector<int> result{xor0, xor1};
                return result;
            }
                
        }
        vector<int> result{xor1, xor0};
        return result;
    }
};