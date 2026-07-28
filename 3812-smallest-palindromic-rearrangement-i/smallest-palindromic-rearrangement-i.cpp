class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>character;
        for(char c:s)
        {
            character[c]++;
        }
        string left ="", right = "", middle = "/0";
        for(auto val:character)
        {
            char ch = val.first;
            int freq = val.second;
            if(freq%2!=0) middle = ch;
            left.append(freq/2,ch);
        }
        right = left;
        reverse(right.begin(),right.end());
        if(middle!="/0") return left + middle + right;
        else return left + right;
    }
};