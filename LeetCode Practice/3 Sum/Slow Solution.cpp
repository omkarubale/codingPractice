class Solution {
public:
    
vector<int> makeVector(int res1, int res2, int res3)
{
    vector<int> readyVector;
    readyVector.push_back(res1);
    readyVector.push_back(res2);
    readyVector.push_back(res3);
    sort(readyVector.begin(), readyVector.end());
    return readyVector;
};
    
bool equalVector(vector<vector<int>> A, vector<int> B)
{
    if(A.empty())
        return true;
    for(auto itr = A.begin(); itr != A.end(); itr++)
    {
        if((*itr)[0] == B[0] && (*itr)[1] == B[1] && (*itr)[2] == B[2])
            return false;
    }
    return true;
};
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        unordered_map<int,int> m;
        int res1;
        if(nums.size()<3)
            return results;
        
        for(auto itr1 = nums.begin(); itr1 != nums.end()-2; itr1++)
        {
            for(auto itr2 = itr1+1; itr2 != nums.end()-1; itr2++)
            {
                res1 = (*itr1) + (*itr2);
                for(auto itr3 = itr2+1; itr3 != nums.end(); itr3++)
                {
                    if(res1 + (*itr3) == 0)
                    {
                        vector<int> checking = makeVector((*itr1),(*itr2),(*itr3));
                        if(equalVector(results,checking))
                            results.push_back(checking);
                    }
                }
            }
        }
        return results;
        
    }
};
