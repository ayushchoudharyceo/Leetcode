class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,maxi = INT_MIN;
        for (auto i:accounts)
        {
            for(auto j:i)
            {
                sum+= j;
            }
            maxi = max(sum,maxi);
            sum=0;
        }
        return maxi;
    }
};