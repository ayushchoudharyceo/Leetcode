class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        if (n == 1) return 0;
        
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            if(i == 0) {
                if(0 == suffix[i+1]) return 0; 
            }
            else if(i == n - 1) {
                if(prefix[i-1] == 0) return i;
            }
            else {
                if(prefix[i-1] == suffix[i+1]) return i;
            }
        }
        return -1;
    }
};