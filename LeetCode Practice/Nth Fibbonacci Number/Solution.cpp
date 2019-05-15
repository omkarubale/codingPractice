class Solution {
public:
    int fib(int N) {
        if(N < 2) return N;
        queue<int> q;
        q.push(1);
        int result = 0;
        //int temp;
        for(int i = 1; i < N; i++)
        {
            result += q.front();
            q.push(result);
            result = q.front();
            q.pop();
        }
        return q.front();
    }
};