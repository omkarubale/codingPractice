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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> m;
        stack<TreeNode*> s;
        vector<int> result;
        
        if(!root) return result;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* current = s.top();
            s.pop();
            if(current->left != NULL) s.push(current->left);
            if(current->right != NULL) s.push(current->right);
            
            m[current->val]++;
        }
        int max = 0;
        for(auto i : m)
        {
            if(i.second > max)
            {
                max = i.second;
                result.clear();
                result.emplace_back(i.first);
            }
            else if(i.second == max)
            {
                result.emplace_back(i.first);
            }
        }
        
        return result;
    }
};