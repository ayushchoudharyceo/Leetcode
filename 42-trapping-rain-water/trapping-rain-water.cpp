class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), i=1;
        if (n < 3) return 0;
        int total_capacity = 0;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0] = height[0];
        while(i<n) {
            prefix[i] = max(prefix[i-1],height[i]);
            i++;
            }
        suffix[n-1] = height [n-1];
        i = n-2;
        while(i>=0){
            suffix[i] = max(suffix[i+1] , height [i]);
            i--;
        }
        i =1;
        while(i<n-1)
        {
            total_capacity+=min(prefix[i],suffix[i]) - height[i];
            i++;
        }
        return total_capacity;
    }
};