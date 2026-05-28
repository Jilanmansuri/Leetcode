// Last updated: 28/05/2026, 19:47:03
1class Solution {
2public:
3    bool repeatedSubstringPattern(string s) {
4        int n = s.size();
5
6        for (int len = 1; len <= n / 2; len++) {
7
8            if (n % len != 0) continue;
9
10            string pattern = s.substr(0, len);
11            string temp = "";
12
13            int repeat = n / len;
14
15            for (int i = 0; i < repeat; i++) {
16                temp += pattern;
17            }
18
19            if (temp == s) {
20                return true;
21            }
22        }
23
24        return false;
25    }
26};