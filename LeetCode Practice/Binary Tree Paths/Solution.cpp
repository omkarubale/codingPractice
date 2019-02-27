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
    void goDeeper(vector<string> &result, TreeNode *current, string currentTrain)
    {
        if (current->left == NULL && current->right == NULL)
        {
            result.emplace_back(currentTrain);
            return;
        }
        if (current->left != NULL)
            goDeeper(result, current->left, currentTrain + "->" + to_string(current->left->val));
        if (current->right != NULL)
            goDeeper(result, current->right, currentTrain + "->" + to_string(current->right->val));
        return;
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        if (!root)
            return result;

        goDeeper(result, root, to_string(root->val));
        return result;
    }
};