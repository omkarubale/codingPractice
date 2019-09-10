class KthLargest {
public:
    vector<int> vec;
    int k_;
    KthLargest(int k, vector<int>& nums) : vec(nums), k_(k) {
        make_heap(vec.begin(), vec.end(), greater<int>()); // form a min heap
        while (vec.size() > k) {
            pop_heap(vec.begin(), vec.end(), greater<int>()); //Remove the smallest element
            vec.pop_back();
        }
    }
    
    int add(int val) {
        vec.push_back(val);
        push_heap(vec.begin(), vec.end(), greater<int>()); //Add the element to the min heap
        if (vec.size() > k_) {
            pop_heap(vec.begin(), vec.end(), greater<int>()); //Pop the minimum, which has at least k + 1 elements >= to it.
            vec.pop_back();     //The new min of the min heap has exactly k elements >= to it.
        }
        return vec[0];
    }
};