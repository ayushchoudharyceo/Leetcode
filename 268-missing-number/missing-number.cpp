class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0, sum = 0,total;
        total = n*(n+1)/2;
        while(i<n)
        {
            sum += nums[i];
            i++;
        }
        return ( total - sum);
    }
};