class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), left = 0, right = 0, max_length = 0;
        unordered_map<char, int> map;
        while (right < n) {
            char current_char = s[right];
            if (map.find(current_char) != map.end() && map[current_char] >= left) {
                left = map[current_char] + 1;
            }
            map[current_char] = right;
            max_length = max(max_length, right - left + 1);
            right++;
        }
        return max_length;
    }
};