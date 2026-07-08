class Solution {
public:
    double findMaxAverage(vector<int>& num, int k) {
        int i=0,j=0,wsum=0;
        int maxi = INT_MIN;
        while(j<num.size())
        {
            if(j<k)
            {
                wsum = wsum + num[j];
                if (j == k - 1) 
                {
                    maxi = wsum;
                }
            }
            else
            {
                wsum = wsum-num[i]+num[j];
                maxi = max(maxi,wsum);
                i++;
            }
            j++;
        }
        return (double)maxi/k;
    }
};