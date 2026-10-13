class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squares(n);
        
        for(int i = 0; i < n; i++) {
            squares[i] = (long long)nums[i] * nums[i]; 
        }
        
        sort(squares.begin(), squares.end());
        
        long long score = 0;
        
        for(int i = 0; i < n / 2; i++) {
            score -= squares[i];
        }
        
        for(int i = n / 2; i < n; i++) {
            score += squares[i];
        }
        
        return score;
    }
};