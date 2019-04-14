/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution
{

private:
  Node *divideAndConquer(vector<vector<int>> &grid, int x, int y, int length)
  {
    if (length == 1)
      return new Node(grid[x][y] == 1, true, nullptr, nullptr, nullptr, nullptr);

    int newLength = length / 2;

    Node *topLeft = divideAndConquer(grid, x, y, newLength);
    Node *topRight = divideAndConquer(grid, x, y + newLength, newLength);
    Node *bottomLeft = divideAndConquer(grid, x + newLength, y, newLength);
    Node *bottomRight = divideAndConquer(grid, x + newLength, y + newLength, newLength);

    if (topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf && bottomRight->isLeaf &&
        ((topLeft->val && topRight->val && bottomLeft->val && bottomRight->val) ||
         !(topLeft->val || topRight->val || bottomLeft->val || bottomRight->val)))
    {
      bool val = topLeft->val;

      return new Node(val, true, nullptr, nullptr, nullptr, nullptr);
    }
    return new Node(true, false, topLeft, topRight, bottomLeft, bottomRight);
  }

public:
  Node *construct(vector<vector<int>> &grid)
  {
    int N = grid.size();
    if (N == 0)
      return nullptr;
    return divideAndConquer(grid, 0, 0, N);
  }
};