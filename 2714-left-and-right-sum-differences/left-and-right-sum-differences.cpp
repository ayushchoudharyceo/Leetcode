class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
     int n = nums.size();
        if (n == 0) return {};
        if (n == 1) return {0};
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        vector<int> result(n, 0);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) 
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) 
        {
            suffix[i] = suffix[i + 1] + nums[i];
        }
        for(int i=0;i<n;i++)
        {
            result[i] = abs(suffix[i] - prefix[i]);
        }
        return result;   
    }
};