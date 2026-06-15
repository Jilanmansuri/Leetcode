// Last updated: 15/06/2026, 09:28:49
1class Solution {
2public:
3    int countSegments(string s) {
4
5        int count = 0;
6
7        for (int i = 0; i < s.size(); i++) {
8            if (s[i] != ' ' && (i==0 || s[i-1]== ' ')) {
9                count++;
10            }
11        }
12        return count;
13    }
14};