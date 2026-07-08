class Solution {
public:
    bool isVowel(char c) 
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int wsum=0;
        int maxi = INT_MIN;
        int i=0;
        while(i<k)
        {
            if(isVowel(s[i])) wsum++;
            i++;
        }
        maxi = wsum;
        i=k;
       while(i<s.size())
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
            i++;
        }
        return maxi;
    }
};