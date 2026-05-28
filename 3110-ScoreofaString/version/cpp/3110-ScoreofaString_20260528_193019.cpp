// Last updated: 28/05/2026, 19:30:19
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int score = 0;
5
6        for (int i = 1; i < s.size(); i++) {
7            score += abs(s[i] - s[i - 1]);
8        }
9
10        return score;
11    }
12};