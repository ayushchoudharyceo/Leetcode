class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0 ,j=0;
        int s_size = s.size();
        int p_size = p.size();
        int star = -1, index =-1;
        while(i<s.size())
        {
            if(j<p_size && p[j] == '?' || p[j] == s[i])
            {
                i++;
                j++;
            }
            else if(j<p_size && p[j] == '*')
            {
                star=j;
                index = i;
                j++;
            }
            else if (star!= -1) {
                j = star + 1;
                index++;
                i = index;
            }
            else return false;
        }
        while (j < p_size && p[j] == '*') {
            j++;
        }
        return j == p_size;
        
    }
};