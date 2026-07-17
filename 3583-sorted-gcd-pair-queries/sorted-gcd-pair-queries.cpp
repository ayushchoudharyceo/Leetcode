class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int max_val = 0;
        for (int x : nums) {
            max_val = max(max_val, x);
        }
        vector<int> cnt(max_val + 1, 0);
        for (int x : nums) {
            cnt[x]++;
        }
        vector<long long> G(max_val + 1, 0);
        for (int i = max_val; i >= 1; --i) {
            long long c = 0;
            for (int j = i; j <= max_val; j += i) {
                c += cnt[j];
            }
            
            long long pairs = c * (c - 1) / 2;
            
            for (int j = 2 * i; j <= max_val; j += i) {
                pairs -= G[j];
            }
            
            G[i] = pairs;
        }
        
        vector<long long> pref(max_val + 1, 0);
        for (int i = 1; i <= max_val; ++i) {
            pref[i] = pref[i - 1] + G[i];
        }
        
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            ans[i] = upper_bound(pref.begin(), pref.end(), queries[i]) - pref.begin();
        }
        
        return ans;
    }
};