class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i=0,sum=0,maxi = INT_MIN;
        while(i<accounts.size())
        {
            int j=0;
            while(j<accounts[i].size())
            {
                sum+= accounts[i][j];
                j++;
            }
            maxi = max(sum,maxi);
            sum=0;
            i++;
        }
        return maxi;
    }
};