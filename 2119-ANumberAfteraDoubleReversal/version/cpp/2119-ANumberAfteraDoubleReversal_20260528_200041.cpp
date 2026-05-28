// Last updated: 28/05/2026, 20:00:41
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4
5        unordered_set<char> lower;
6        unordered_set<char> upper;
7
8        for (char c : word) {
9
10            if (islower(c)) {
11                lower.insert(c);
12            } else {
13                upper.insert(c);
14            }
15        }
16
17        int count = 0;
18
19        for (char c : lower) {
20
21            if (upper.count(toupper(c))) {
22                count++;
23            }
24        }
25
26        return count;
27    }
28};