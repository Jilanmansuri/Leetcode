// Last updated: 28/05/2026, 20:59:53
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4
5        string s1 = "";
6        string s2 = "";
7
8        for (string s : word1) {
9            s1 += s;
10        }
11
12        for (string s : word2) {
13            s2 += s;
14        }
15
16        return s1 == s2;
17    }
18};