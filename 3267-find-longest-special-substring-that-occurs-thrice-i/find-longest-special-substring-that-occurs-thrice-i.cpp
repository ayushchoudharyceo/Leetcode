class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        unordered_map<string,int> freq;
         for (int i  = 0; i<n; i++)
         {
            string current ="";
            for(int j=i;j<n; j++)
            {
                if(s[i]==s[j])
                {
                    current+= s[j];
                    freq[current]++;
                }
                else break;
            }
        }
        int maxi =-1;
        for(auto [sub,count] : freq)
        {
            if(count>=3)
            {
                maxi = max(maxi, (int)sub.length());
            }
        }
        return maxi;
    }
};