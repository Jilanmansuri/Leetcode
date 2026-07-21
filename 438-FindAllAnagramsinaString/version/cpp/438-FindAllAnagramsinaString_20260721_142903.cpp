// Last updated: 21/07/2026, 14:29:03
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> ans;
5        if (p.size() > s.size()) {
6            return ans;
7        }
8        vector<int> pFreq(26, 0);
9        vector<int> sFreq(26, 0);
10
11
12        for (int i = 0; i < p.size(); i++) {
13            pFreq[p[i] - 'a']++;
14            sFreq[s[i] - 'a']++;
15        }
16
17        if (pFreq == sFreq) {
18            ans.push_back(0);
19        }
20
21        for (int i = p.size(); i < s.size(); i++) {
22            sFreq[s[i - p.size()] - 'a']--;
23
24            sFreq[s[i]- 'a']++;
25
26            if (pFreq == sFreq) {
27                ans.push_back(i - p.size() + 1);
28            }
29        }
30        return ans;
31    }
32};