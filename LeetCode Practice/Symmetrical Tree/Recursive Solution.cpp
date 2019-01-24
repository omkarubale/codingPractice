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
    bool compare(TreeNode* leftSide, TreeNode* rightSide)
    {
        if(leftSide == NULL && rightSide == NULL)
            return true;
        if((leftSide == NULL && rightSide != NULL) || (leftSide != NULL && rightSide == NULL))
            return false;

        return (leftSide->val == rightSide->val) 
            && compare(leftSide->left, rightSide->right) 
            && compare(leftSide->right, rightSide->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return true;
        if((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
            return false;
        TreeNode *leftSide = root->left;
        TreeNode *rightSide = root->right;
        
        return ((leftSide->val == rightSide->val) && (compare(leftSide, rightSide)));
    }
};