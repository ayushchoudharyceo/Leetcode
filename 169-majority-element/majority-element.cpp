class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        int n = nums.size()/2;
        for(int i:nums)
        {
            count[i]++;
        }
        for(auto[k,v]: count)
        {
            if(v>n) return k;
        }
        return -1;
    }
};