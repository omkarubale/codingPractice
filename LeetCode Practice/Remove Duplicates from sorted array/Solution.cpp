class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        int len = 0;
        
        for(auto itr = nums.begin(); itr != nums.end(); itr++)
            if(mp[(*itr)] == 0)
            {
                len++;
                mp[(*itr)] = 1;
                result.push_back((*itr));
                cout<<"map Value : "<<mp[(*itr)]<<" len : "<<len<<" *itr : "<<(*itr)<<"\n";
            }
        nums = result;
        return len;
    }
};