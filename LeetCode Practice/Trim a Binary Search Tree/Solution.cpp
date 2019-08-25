/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *trimBST(TreeNode *root, int L, int R)
    {
        if (root != NULL)
        {
            while (1)
            {
                if (root->val > R)
                    root = root->left;
                else if (root->val < L)
                    root = root->right;
                if (!root || !(root->val > R || root->val < L))
                    break;
            }

            if(root && root->left) root->left = trimBST(root->left, L, R);
            if(root && root->right) root->right = trimBST(root->right, L, R);
        }

        return root;
    }
};