class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.size() % 2 != 0) return false;
        int v = 0, h = 0;
        for(auto c : moves)
            if(c == 'U') v++;
            else if(c == 'D') v--;
            else if(c == 'L') h--;
            else h++;
        
        return v == 0 && h == 0;
    }
};