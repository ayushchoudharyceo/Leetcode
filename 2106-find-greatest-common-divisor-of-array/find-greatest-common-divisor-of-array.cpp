class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min_val = nums[0];
        int max_val = nums[nums.size()-1];       
        return gcd(min_val, max_val);
    }
};