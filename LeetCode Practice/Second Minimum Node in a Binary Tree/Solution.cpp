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
    long ans = LONG_MAX;
    int min1;
    
public:
    void dfs(TreeNode* root)
    {
        if(root != NULL)
        {
            if(min1< root->val && root->val < ans)
            {
                ans = root->val;
            }
            else if(min1 == root->val)
            {
                dfs(root->right);
                dfs(root->left);
            }
        }
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        min1 = root->val;
        dfs(root);
        return ans < LONG_MAX ? ans : -1;
    }
};