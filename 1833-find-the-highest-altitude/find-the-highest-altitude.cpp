class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int n = gain.size();
        int i=0, maxi=0 ,current =0;
        while(i<n)
        {
            current+=gain[i];
            maxi = max(current,maxi);
            i++;
        }
        return maxi;
    }
};