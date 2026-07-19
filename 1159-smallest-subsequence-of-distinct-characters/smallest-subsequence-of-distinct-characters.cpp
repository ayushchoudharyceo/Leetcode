class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> count(26, 0);
        vector<bool> inResult(26, false);
        string result = "";
        
        for (char c : s) {
            count[c - 'a']++;
        }
        
        for (char c : s) {
            count[c - 'a']--;
            
            if (inResult[c - 'a']) {
                continue;
            }
            
            while (!result.empty() && result.back() > c && count[result.back() - 'a'] > 0) {
                inResult[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            result.push_back(c);
            inResult[c - 'a'] = true;
        }
        
        return result;
    }
};