// Last updated: 05/06/2026, 20:05:52
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char ans = 0;
5
6        for (char ch : s) {
7            ans ^= ch;
8        }
9        for (char ch : t) {
10            ans ^= ch;
11        }
12
13        return ans;
14    }
15};