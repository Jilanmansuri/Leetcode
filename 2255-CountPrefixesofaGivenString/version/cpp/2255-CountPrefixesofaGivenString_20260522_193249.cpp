// Last updated: 22/05/2026, 19:32:49
1class Solution {
2public:
3    int countPrefixes(vector<string>& words, string s) {
4        int count = 0;
5        for (string word : words) {
6            if (s.find(word) == 0) {
7                count++;
8            }
9        }
10        return count;
11    }
12};