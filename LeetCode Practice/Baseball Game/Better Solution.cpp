class Solution
{
public:
    int calPoints(vector<int> &ops)
    {
        vector<int> pts;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i].compare("C") == 0)
            {
                pts.pop_back();
            }
            else if (ops[i].compare("D") == 0)
            {
                pts.push_back(pts.back() * 2);
            }
            else if (ops[i].compare("+") == 0)
            {
                int tmp = pts.back() + pts[pts.size() - 2];
                pts.push_back(tmp);
            }
            else
            {
                int tmp = stoi(ops[i]);
                pts.push_back(tmp);
            }
        }
        int sum = 0;
        for (auto &p : pts)
            sum += p;

        return sum;
    }