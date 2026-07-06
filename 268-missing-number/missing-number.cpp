class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0, sum = 0;
        while(i<n)
        {
            sum += nums[i];
            i++;
        }
        return (n*(n+1)/2  - sum);
    }
};