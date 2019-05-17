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
    int getMinimumDifference(TreeNode* root) {
        vector<int> storage;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* current = q.front();
            storage.emplace_back(current->val);
            
            q.pop();
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        
        sort(storage.begin(), storage.end());
        
        int min = INT_MAX;
        for(int i = 1; i < storage.size(); i++)
            if(storage[i]-storage[i-1] < min) min = storage[i]-storage[i-1];
        
        return min;
    }
};