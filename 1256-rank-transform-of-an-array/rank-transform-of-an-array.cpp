class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>s_arr= arr;
        sort(s_arr.begin(),s_arr.end());
        unordered_map<int, int> rank;
        int crr=1;
        for(int num : s_arr)
        {
            if(rank.find(num) == rank.end())
            {
                rank[num] = crr;
                crr++;
            }
        }
        vector<int>result(arr.size());
        for(int i =0 ;i<arr.size();i++)
        {
            result[i] = rank[arr[i]];
        }
        return result;
    }
};