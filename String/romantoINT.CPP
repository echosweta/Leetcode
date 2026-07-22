class Solution {
public:
    int romanToInt(string s) {
        map<char, int> val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int n = s.length() - 1;
        int ans = 0;

        while (n > -1) {
            if (s[n] == 'V') {
                if (n - 1 > -1 && s[n - 1] == 'I') {
                    ans += 4;
                    n--;
                } else {
                    ans += 5;
                }
            }
            else if (s[n] == 'X') {
                if (n - 1 > -1 && s[n - 1] == 'I') {
                    ans += 9;
                    n--;
                } else {
                    ans += 10;
                }
            }
            else if (s[n] == 'C') {
                if (n - 1 > -1 && s[n - 1] == 'X') {
                    ans += 90;
                    n--;
                } else {
                    ans += 100;
                }
            }
            else if (s[n] == 'L') {
                if (n - 1 > -1 && s[n - 1] == 'X') {
                    ans += 40;
                    n--;
                } else {
                    ans += 50;
                }
            }
            else if (s[n] == 'D') {
                if (n - 1 > -1 && s[n - 1] == 'C') {
                    ans += 400;
                    n--;
                } else {
                    ans += 500;
                }
            }
            else if (s[n] == 'I') {
                ans += 1;
            }
            else if (s[n] == 'M') {
                if (n - 1 > -1 && s[n - 1] == 'C') {
                    ans += 900;
                    n--;
                } else {
                    ans += 1000;
                }
            }

            n--;
        }

        return ans;
    }
};