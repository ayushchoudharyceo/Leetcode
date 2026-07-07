class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0], count =1;
        for(int i=1;i<nums.size();i++)
        {
            if(maj == nums[i]) count++;
            else count--;
            if(count ==0){
                maj = nums[i];
                count =1;
            }
        }
        int count2=0;
        for(int i:nums)
        {
            if(maj==i) count2++;
        }
        return count2> nums.size()/2? maj :-1;
    }
};