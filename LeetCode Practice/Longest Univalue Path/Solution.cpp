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
    int arrowLength(TreeNode* root, int &result) {
        if(!root) return 0;
        
        int left = arrowLength(root->left, result);
        int right = arrowLength(root->right, result);
        int arrowLeft = 0, arrowRight = 0;
        
        if(root->left != NULL && root->left->val == root->val)
            arrowLeft += left + 1;
        
        if(root->right != NULL && root->right->val == root->val)
            arrowRight += right + 1;
        
        result = max(result, arrowLeft + arrowRight);
        return max(arrowLeft, arrowRight);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        int result = 0;
        arrowLength(root, result);
        return result;
    }
};