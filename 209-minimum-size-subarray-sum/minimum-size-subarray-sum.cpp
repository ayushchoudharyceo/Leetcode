class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &arr)
    {
        int n = arr.size(), i = 0, j = 0, wsum = 0, min_size = INT_MAX;
        while (j < n)
        {
            wsum += arr[j];
            while (wsum >= target)
            {
                min_size = min(min_size, j - i + 1);
                wsum -= arr[i];
                i++;
            }
            j++;
        }
        if (min_size == INT_MAX)
        {
            return 0;
        }
        else
        {
           return min_size;
        }
    }
};