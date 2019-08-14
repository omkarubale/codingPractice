/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void insider(Node* node, vector<int> &result)
    {
        if(node)
        {
            result.emplace_back(node->val);
            for(auto child : node->children)
            {
                insider(child, result);
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> result;
        insider(root, result);
        return result;
    }
};