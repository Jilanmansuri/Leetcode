// Last updated: 09/06/2026, 15:20:13
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans = "";
5        int count=0;
6
7        for (char ch:s) {
8            if (ch == '(') {
9
10                if (count > 0) {
11                    ans += ch;
12                }
13                count++;
14            } else {
15                count--;
16                if (count > 0) {
17                    ans += ch;
18                }
19            }
20        }
21        return ans;
22    }
23};