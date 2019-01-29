/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:  
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        if(nums.size() == 1)
            return new TreeNode(nums[0]);
        
        auto mid = nums.size()/2;
        
        TreeNode *root = new TreeNode(nums[mid]);
        
        vector<int> leftSide(nums.begin(),nums.begin()+mid);
        vector<int> rightSide(nums.begin()+mid+1,nums.end());
        
        root->left = sortedArrayToBST(leftSide);
        root->right = sortedArrayToBST(rightSide);
        
        return root;
    }
};