class TrieNode
{
public:
    TrieNode *self;
    char val;
    bool isEnd;
    int lengthCount;
    vector<TrieNode> children;
    TrieNode(char x) : val(x), children(vector<TrieNode>()), isEnd(false), lengthCount(1) {}

    void Insert(string s)
    {
        int counter = 0;
        TrieNode *current = self;
        while (counter < s.size())
        {
            current->lengthCount++;
            bool found = false;
            for (auto c : current->children)
            {
                if (c->val == s[i])
                {
                    current = c;

                    found = true;
                    break;
                }
            }
            if (!found)
            {
                TrieNode newChild = new TrieNode(s[i]);
                (current->children).emplace_back(newChild);
                current = newChild;
            }
        }
        current->isEnd = true;
    }

    string Result()
    {
        string result = "";
        TrieNode current;
        vector<TrieNode> currentChildren = children;

        while (currentChildren.size() > 0)
        {
            int maxLength = 0;
            for (auto c : currentChildren)
            {
                if (c->lengthCount > maxLength)
                {
                    maxLength = c->lengthCount;
                    current = c;
                }
            }
            result += current->val;
            currentChildren = current->children;
        }
        return result;
    }
};

class Solution
{
public:
    string longestWord(vector<string> &words)
    {
        if (words.size() == 0)
            return "";
        if (words.size() == 1)
            return words[0];

        TrieNode root = new TrieNode(" ");
        for (int i = 0; i < words.size(); i++)
        {
            root.Insert(word[i]);
        }

        return root.Result();
    }
};