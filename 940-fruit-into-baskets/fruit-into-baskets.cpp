class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int l = 0, r = 0, maxi = 0;
        unordered_map<int, int> state;
        while (r < nums.size()) {
            state[nums[r]]++;
            while (state.size() > 2) {
                state[nums[l]]--;
                if (state[nums[l]] == 0) {
                    state.erase(nums[l]);
                }
                l++;
            }
            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};