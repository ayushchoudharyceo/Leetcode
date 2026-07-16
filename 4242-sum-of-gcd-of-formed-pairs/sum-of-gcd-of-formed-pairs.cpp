class Solution {
public:
    long long gcdSum(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int current_max = 0;
        for (int i = 0; i < n; ++i) {
            current_max = max(current_max, nums[i]);
            prefixGcd[i] = gcd(nums[i], current_max);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long total_sum = 0;
        for (int i = 0; i < n / 2; ++i) {
            total_sum += gcd(prefixGcd[i], prefixGcd[n - 1 - i]);
        }
        return total_sum;
    }
};