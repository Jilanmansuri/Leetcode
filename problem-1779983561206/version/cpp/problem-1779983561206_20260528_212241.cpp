// Last updated: 28/05/2026, 21:22:41
1class Solution {
2public:
3    int countSegments(string s) {
4
5        int count = 0;
6
7        for (int i = 0; i < s.size(); i++) {
8
9            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
10                count++;
11            }
12        }
13
14        return count;
15    }
16};