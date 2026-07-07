class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     set<int>set;
     for(int i:nums)
     {
        set.insert(i);
     }   
     return nums.size()!=set.size();
    }
};