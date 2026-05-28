// Last updated: 28/05/2026, 21:22:10
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4
5        int upper = 0;
6
7        for (char ch : word) {
8
9            if (ch >= 'A' && ch <= 'Z') {
10                upper++;
11            }
12        }
13
14        if (upper == word.size() || upper == 0) {
15            return true;
16        }
17
18        if (upper == 1 && word[0] >= 'A' && word[0] <= 'Z') {
19            return true;
20        }
21
22        return false;
23    }
24};