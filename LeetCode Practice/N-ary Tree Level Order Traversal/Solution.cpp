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
class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;

        vector<int> first{root->val};
        result.emplace_back(first);

        queue<Node *> q;
        q.push(root);

        int currentCounter = 1, nextCounter = 0;

        while (!q.empty() && currentCounter != 0)
        {
            vector<int> resultRow;
            for (int i = 0; i < currentCounter; i++)
            {
                Node *current = q.front();
                for (int j = 0; j < (current->children).size(); j++)
                {
                    nextCounter++;
                    q.push((current->children)[j]);
                    resultRow.emplace_back((current->children)[j]->val);
                }
                q.pop();
            }
            if (resultRow.size() > 0)
                result.emplace_back(resultRow);

            currentCounter = nextCounter;
            nextCounter = 0;
        }
        return result;
    }
};