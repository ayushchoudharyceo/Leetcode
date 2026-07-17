class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int max_val = 0;
        for (int x : nums) {
            max_val = max(max_val, x);
        }
        
        // cnt[i] stores the frequency of number i in nums
        vector<int> cnt(max_val + 1, 0);
        for (int x : nums) {
            cnt[x]++;
        }
        
        // G[i] will store the exact number of pairs with GCD exactly equal to i
        vector<long long> G(max_val + 1, 0);
        
        // Iterate backwards to compute the exact GCD frequencies using inclusion-exclusion
        for (int i = max_val; i >= 1; --i) {
            long long c = 0;
            // Count how many elements in nums are multiples of i
            for (int j = i; j <= max_val; j += i) {
                c += cnt[j];
            }
            
            // Total pairs where both elements are multiples of i
            long long pairs = c * (c - 1) / 2;
            
            // Subtract pairs where the GCD is a strict multiple of i (2i, 3i, etc.)
            for (int j = 2 * i; j <= max_val; j += i) {
                pairs -= G[j];
            }
            
            G[i] = pairs;
        }
        
        // Compute prefix sums of the GCD frequencies
        vector<long long> pref(max_val + 1, 0);
        for (int i = 1; i <= max_val; ++i) {
            pref[i] = pref[i - 1] + G[i];
        }
        
        // Answer each query using binary search
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            // upper_bound finds the first index where the prefix sum is strictly greater than the query
            ans[i] = upper_bound(pref.begin(), pref.end(), queries[i]) - pref.begin();
        }
        
        return ans;
    }
};