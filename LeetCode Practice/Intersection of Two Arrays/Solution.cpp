class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> m1;
        unordered_map<int, bool> m2;
        vector<int> result;
        
        for(int i = 0; i < nums1.size(); i++)
            m1[nums1[i]] = true;
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m1[nums2[i]] == true && m2[nums2[i]] == false)
            {
                m2[nums2[i]] = true;
                result.emplace_back(nums2[i]);
            }
        }
        return result;
    }
};