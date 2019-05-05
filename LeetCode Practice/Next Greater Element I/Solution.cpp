class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);
        unordered_map<int, int> m;
        for(int i = 0; i < nums2.size(); i++) m[nums2[i]] = i;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = m[nums1[i]]; j < nums2.size(); j++)
            {
                if(nums1[i] < nums2[j])
                {
                    result[i] = nums2[j];
                    break;
                }
            }
        }

        return result;
    }
};