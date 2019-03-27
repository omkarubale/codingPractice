class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int l = 0, r = 0;
        
        while(l != nums1.size() && r != nums2.size())
        {
            int left = nums1[l], right = nums2[r];
            
            if(nums1[l] == nums2[r])
            {
                result.emplace_back(nums1[l]);
                while(l != nums1.size() && nums1[l] == left) l++;
                while(r != nums2.size() && nums2[r] == right) r++;
                continue;
            }
            
            if(right > left) while(l != nums1.size() && nums1[l] == left) l++;
            else while(r != nums2.size() && nums2[r] == right) r++;
        }
        return result;
    }
};

