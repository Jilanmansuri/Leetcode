// Last updated: 13/06/2026, 14:09:31
1class Solution {
2public:
3    int maxFreqSum(string s) {
4        unordered_map<char, int> mp;
5
6        for (char ch : s) {
7            mp[ch]++;
8        }
9
10        int maxivowel = 0;
11        int maxiconst = 0;
12
13        for (auto it : mp) {
14            if (it.first == 'a' || it.first == 'e' ||
15                it.first == 'i' || it.first == 'o' ||
16                it.first == 'u') {
17
18                maxivowel = max(maxivowel, it.second);
19            }
20            else {
21                maxiconst = max(maxiconst, it.second);
22            }
23        }
24
25        return maxivowel + maxiconst;
26    }
27};