class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n < 2) return s;

        string ans = "";

        for (int i = 0; i < n; i++) {
            // Odd length palindrome
            int prev = i;
            int next = i;

            while (prev >= 0 && next < n && s[prev] == s[next]) {
                prev--;
                next++;
            }

            int len = next - prev - 1;
            if (len > ans.size()) {
                ans = s.substr(prev + 1, len);
            }

            // Even length palindrome
            prev = i;
            next = i + 1;

            while (prev >= 0 && next < n && s[prev] == s[next]) {
                prev--;
                next++;
            }

            len = next - prev - 1;
            if (len > ans.size()) {
                ans = s.substr(prev + 1, len);
            }
        }

        return ans;
    }
};