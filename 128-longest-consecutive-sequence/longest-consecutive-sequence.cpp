class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>set;
        int maxi =0,current =0;
        for(int i:nums)
        {
            set.insert(i);
        }
        for(int i:set)
        {
            int a = i;
            if(set.count(a-1) == 0)
            {
                current =1;
                while(set.count(a+1) == 1)
                {
                    a++;
                    current++;
                }
            }
            maxi = max(current,maxi);
        }
        return maxi;        
    }
};