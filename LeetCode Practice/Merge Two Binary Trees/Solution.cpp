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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 == NULL && t2 == NULL) return NULL;
        TreeNode *current = new TreeNode((t1 != NULL ? t1->val : 0) + (t2 != NULL ? t2->val : 0));
        current->left = mergeTrees(t1 != NULL ? t1->left : NULL, t2 != NULL ? t2->left : NULL);
        current->right = mergeTrees(t1 != NULL ? t1->right : NULL, t2 != NULL ? t2->right : NULL);
        return current;
    }
};