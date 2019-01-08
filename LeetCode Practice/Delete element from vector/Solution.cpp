class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto itr = nums.begin();
        int count = 0;
        while(itr != nums.end())
        {
            if((*itr)==val)
            {
                nums.erase(itr);
                itr = nums.begin() + count;
            }   
            else
            {
                count++;
                itr++;
            }
        }
        return count;
    }
};