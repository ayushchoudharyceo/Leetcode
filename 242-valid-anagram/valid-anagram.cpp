class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_multiset<char> setS(s.begin(), s.end());
        unordered_multiset<char> setT(t.begin(), t.end());
        return setS == setT;
    }
};