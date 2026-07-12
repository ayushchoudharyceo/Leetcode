class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return{};
        vector<int>s_arr= arr;
        sort(s_arr.begin(),s_arr.end());
        unordered_map<int, int> rank;
        int crr=1, i=0;
        for(int num : s_arr)
        {
            if(rank.find(num) == rank.end())
            {
                rank[num] = crr;
                crr++;
            }
        }
        vector<int>result(arr.size());
        while(i<arr.size())
        {
            result[i] = rank[arr[i]];
            i++;
        }
        return result;
    }
};