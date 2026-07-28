class Solution {
public:
    string smallestPalindrome(string s) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        string left = "";
        left.reserve(s.length() / 2); 
        char middle = '\0';           
        for (int i = 0; i < 26; ++i) {
            if (count[i] % 2 != 0) {
                middle = 'a' + i;
            }
            left.append(count[i] / 2, 'a' + i);
        }
        string result = left;
        result.reserve(s.length());
        if (middle != '\0') {
            result += middle;
        }
        result.append(left.rbegin(), left.rend());
        return result;
    }
};