class KthLargest {
public:
    int k_, kthLargest;
    map<int, int> counts;
    
    int findKthLargest()
    {
        int counter = 0;
        for(auto itr = counts.rbegin(); itr != counts.rend(); itr++)
        {
            counter += itr->second;
            if(counter >= k_) return itr->first;
        }
        return 0;
    }
    
    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        
        for(int i = 0; i < nums.size(); i++)
            counts[nums[i]]++;
    }
    
    int add(int val) {
        if(val <= kthLargest) return kthLargest;      
        counts[val]++;
        
        kthLargest = findKthLargest();
        return kthLargest;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */