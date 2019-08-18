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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> st;
        queue<int> si;
        map<int, double> sums;
        map<int, int> counts;
        
        TreeNode *current;
        int currenti;
        st.push(root);
        si.push(1);
        
        while(!st.empty())
        {
            current = st.front();
            currenti = si.front();
            st.pop();
            si.pop();
            
            sums[currenti] += current->val;
            counts[currenti]++;
            
            if(current->left) st.push(current->left), si.push(currenti+1);
            if(current->right) st.push(current->right), si.push(currenti+1);
        }
        
        vector<double> result;
        
        for(auto key : sums)
            result.emplace_back(key.second / counts[key.first]);

        return result;
    }
};