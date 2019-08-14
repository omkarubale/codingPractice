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
    vector<int> preorder(Node* root) {
        vector<int> result;
        if(!root) return result;
        
        stack<Node*> s;
        Node *current;
        s.push(root);
        
        while(!s.empty())
        {
            current = s.top();
            s.pop();
            result.emplace_back(current->val);
            for(auto itr = current->children.rbegin(); itr != current->children.rend(); ++itr)
                s.push(*itr);
        }
        return result;
    }
};