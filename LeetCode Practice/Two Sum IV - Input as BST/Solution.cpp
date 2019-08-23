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
    bool findTarget(TreeNode* root, int k) {
        queue<TreeNode*> q;
        unordered_map<int, bool> m;
        
        q.push(root);
        TreeNode *current;
        while(!q.empty())
        {
            current = q.front();
            q.pop();
            if(m[k - current->val] == true) return true;
            
            m[current->val] = true;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        
        return false;
    }
};