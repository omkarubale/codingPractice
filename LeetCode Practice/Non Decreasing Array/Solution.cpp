class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()<=1) return true;
        bool flag=false;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]<nums[i-1]) {
                if(!flag) { // first violation
                    flag=true; 
                    if(i!=1 && i!=nums.size()-1 && nums[i]<nums[i-2] && nums[i-1]>nums[i+1])  
                        return false; // immediate violation after the first
                }
                else return false; // second violation
            }
        }
        return true;
    }
};