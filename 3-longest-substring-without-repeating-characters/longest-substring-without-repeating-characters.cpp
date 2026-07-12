class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> last_seen;
        int left = 0, right = 0, max_length = 0;
        while (right < n) {
            char current_char = s[right];
            if (last_seen.find(current_char) != last_seen.end() && last_seen[current_char] >= left) {
                left = last_seen[current_char] + 1;
            }
            last_seen[current_char] = right;
            max_length = max(max_length, right - left + 1);
            right++;
        }
        return max_length;
    }
};