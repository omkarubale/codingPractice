class Solution {
public:
    int calPoints(vector<string>& ops) {
        int score = 0, maxIndex = -1, current = 0;
        vector<int> validIndexes;
        
        for(int i = 0; i < ops.size(); i++)
        {
            if(ops[i] == "C")
            {
                if(maxIndex != -1)
                {
                    score -= stoi(ops[validIndexes[maxIndex]]);
                    validIndexes.pop_back();
                    maxIndex--;
                }
            }
            else if(ops[i] == "+")
            {
                if(maxIndex != -1)
                {
                    
                    if(maxIndex >= 1)
                        current = stoi(ops[validIndexes[maxIndex]]) + stoi(ops[validIndexes[maxIndex-1]]);
                    else
                        current = stoi(ops[validIndexes[maxIndex]]);
                    score += current;
                    ops[i] = to_string(current);
                    maxIndex++;
                    validIndexes.emplace_back(i);
                }
            }
            else if(ops[i] == "D")
            {
                if(maxIndex >= 0)
                {
                    current = stoi(ops[validIndexes[maxIndex]]) * 2;
                    ops[i] = to_string(current);
                    maxIndex++;
                    validIndexes.emplace_back(i);
                    score += current;
                }
            }
            else
            {
                score += stoi(ops[i]);
                validIndexes.emplace_back(i);
                maxIndex++;
            }
        }
        return score;
    }
};