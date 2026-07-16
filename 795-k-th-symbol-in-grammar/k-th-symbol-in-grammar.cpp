// values
// #1                 0
// #2        0                   1
// #3   0         1         1         0
// #4 0   1     1   0     1   0     0   1

class Solution {
public:
    bool solve(int k , bool x)
    {
        if(k==1)
        {
            return x? 1 : 0;
        }
        if(k%2==0)
        {
            return solve (k/2 , !x);
        }
        else
        {
            return solve((k+1)/2 , x);
        }
    }
    int kthGrammar(int n, int k) {
        bool x = false;
        return solve(k , x);
    }
};