class Solution {
public:
    int reverseDegree(string s) 
    {
        int i=0, product =1,sum=0;
        while(i<s.size())
        {
            product = ('z' - s[i] + 1)*(i+1);
            sum+=product;
            i++;
        }
        return sum;
    }
};