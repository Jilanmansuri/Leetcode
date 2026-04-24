// Last updated: 24/04/2026, 11:08:00
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string result = "";
5        int n = max(word1.size(), word2.size());
6        for (int i = 0; i < n; i++) {
7            if (i < word1.size())
8                result += word1[i];
9            if (i < word2.size())
10                result += word2[i];
11        }
12        return result;
13    }
14};