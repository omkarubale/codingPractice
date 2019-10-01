class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        while(i < letters.size() && letters[i] <= target) i++;
        if(i == 0 || i > letters.size() - 1) return letters[0];
        return letters[i];
    }
};