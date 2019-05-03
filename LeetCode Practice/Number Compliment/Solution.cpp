class Solution {
public:
    int findComplement(int num) {
        if(num == 0) return 0;
        int mask = 1;
        while(num > mask) mask |= mask<<1;
        return mask ^ num;
    }
};