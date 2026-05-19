// Last updated: 19/05/2026, 20:14:31
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char ans = 0;
5        for (char ch : s) {
6            ans ^= ch;
7        }
8        for (char ch : t) {
9            ans ^= ch;
10        }
11        return ans;
12    }
13};