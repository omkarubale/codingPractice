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
    int ans;
    int getMaxLeftRight(TreeNode* node)
    {
        if(!node) return 0;
        int left = getMaxLeftRight(node->left);
        int right = getMaxLeftRight(node->right);
        ans = max(ans, left + right + 1);
        return max(left,right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        getMaxLeftRight(root);
        return ans - 1;
    }
};