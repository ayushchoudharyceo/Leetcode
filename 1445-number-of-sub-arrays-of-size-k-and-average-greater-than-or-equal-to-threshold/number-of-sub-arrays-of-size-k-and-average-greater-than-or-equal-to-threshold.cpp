class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int i=0,count=0,wsum=0;
        while(i<k)
        {
            wsum+=arr[i];
            i++;
        }
        if(wsum/k >=th) count++;
        i=0;
        int j=k;
        while(j<arr.size())
        {
            wsum = wsum-arr[i]+arr[j];
            if(wsum/k >=th) count++;
            i++;
            j++;
        }
        return count;
    }
};