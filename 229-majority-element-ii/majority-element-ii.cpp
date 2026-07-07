class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        vector<int>result;
        int n = nums.size()/3;
        for(int i:nums)
        {
            count[i]++;
        }
        for(auto[k,v]: count)
        {
            if(v>n) result.push_back(k);
        }
        return result;
    }
};