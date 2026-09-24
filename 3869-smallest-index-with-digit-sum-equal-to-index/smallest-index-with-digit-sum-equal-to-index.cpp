class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0;
        int size = nums.size();
        while(i<size)
        {
            int j = nums[i];
            int sum =0;
            while(j!=0)
            {
                sum+=j%10;
                j/=10;
            }
            if(sum==i)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};