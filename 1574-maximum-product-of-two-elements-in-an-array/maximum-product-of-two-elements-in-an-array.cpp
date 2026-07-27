class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN,i=0;
        while(i<nums.size())
        {
            if(nums[i]>max1)
            {
                max2 = max1; 
                max1 = nums[i];
            }
            else if(nums[i]>max2)
            {
                max2 = nums[i];
            }
            i++;
        }
        return ((max1-1)*(max2-1));
    }
};