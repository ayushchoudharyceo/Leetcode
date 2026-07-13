class Solution {
public:
    int& minVal(int &a, int &b, int&c)
    {
        if(a<=b && a<=c) return a;
        if(b<=a && b<=c) return b;
        return c;
    }

    int maximumLength(string s) {
        int maxi =-1;
        int current =0;
        char prev ='*';
        vector<vector<int>>map(26,vector<int>(3,-1));
        for(char ch:s)
        {
            int ind = ch-'a';
            current = (prev ==ch) ? current+1 :1;
            prev = ch;

            int& mini = minVal(map[ind][0],map[ind][1],map[ind][2] );
            if(current>mini)
            {
                mini = current;
            }

        }
        for(int i=0;i<26;i++)
        {
            int temp =min({ map[i][0],map[i][1],map[i][2]});
            maxi = max(maxi, temp);
        }
        return maxi;
    }
};