class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> m, start, end;
        int max = -1, minFrequency = INT_MAX, temp = 0;
        vector<int> maxes;
        
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            if(start.find(nums[i]) == start.end()) start[nums[i]] = i;
            end[nums[i]] = i;
        }
        
        for(auto n : m)
        {
            if(n.second > max)
            {
                max = n.second;
                maxes.clear();
                maxes.emplace_back(n.first);
            }
            else if(n.second == max)
                maxes.emplace_back(n.first);
        }
        
        for(int i = 0; i < maxes.size(); i++)
        {
            temp = end[maxes[i]] - start[maxes[i]] + 1;
            if(minFrequency > temp) minFrequency = temp;
        }
        
        return minFrequency;
    }
};