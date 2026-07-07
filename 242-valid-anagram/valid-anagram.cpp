class Solution {
public:
    bool isAnagram(string s, string t) {
        int size = s.size();
        if(size!=t.size()){
            return false;
        }
        std::unordered_multiset<char> setS(s.begin(), s.end());
        std::unordered_multiset<char> setT(t.begin(), t.end());
        return setS == setT;
    }
};