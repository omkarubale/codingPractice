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
    bool equalTrees(TreeNode* t1, TreeNode* t2)
    {
        if((!t1 && t2) || (t1 && !t2)) return false;
        if(!t1 && !t2) return true;
        return (t1->val == t2->val) && equalTrees(t1->left, t2->left) && equalTrees(t1->right, t2->right);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        queue<TreeNode*> q;
        TreeNode* current;
        q.push(s);
        while(!q.empty())
        {
            current = q.front();
            if((current->val == t->val) && equalTrees(current,t)) return true;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
            q.pop();
        }
        return false;
    }
};