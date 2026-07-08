class Solution {
public:
    bool isVowel(char c) 
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int wsum=0;
        int maxi = INT_MIN;
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i])) wsum++;
        }
        maxi = wsum;
        for(int i=k; i<s.size();i++)
        {
            if(isVowel(s[i-k]))
            {
                wsum--;
            }
            if (isVowel(s[i]))
            {
                wsum++;
            }
            maxi = max(maxi,wsum);
        }
        return maxi;
    }
};