class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int current = 0;
        int mini = 0;
        for(int i = 0; i < n; i++) 
        {
            current += nums[i];
            mini = min(current, mini); 
        }
        return abs(mini) + 1; 
    }
};