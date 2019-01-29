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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        
        queue<TreeNode*> q;
        
        int levelCounter = 2, elementCounter = 1;
        bool isNull = false;
               
        q.push(root->left);
        q.push(root->right);
        result.push_back(vector<int> {root->val});
        while(!isNull)
        {
            isNull = true;
            vector<int> temp;
            for(int i = 0; i < pow(2,(levelCounter-1)); i++)
            {
                TreeNode *tempNode = q.front();
                q.pop();
                if(tempNode != NULL)
                {
                    q.push(tempNode->left);
                    q.push(tempNode->right);
                }
                else
                {
                    q.push(NULL);
                    q.push(NULL);
                }
                elementCounter += 2;
                
                if(tempNode)
                {
                    temp.push_back(tempNode->val);
                    isNull = false;
                }              
            }
            
            if(!temp.empty())
                result.insert(result.begin(),temp);
            
            levelCounter += 1;
            
        }
        return result;
    }
};