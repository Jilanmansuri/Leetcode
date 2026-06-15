// Last updated: 15/06/2026, 10:16:36
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> ans;
5
6        if (p.size() > s.size()) {
7            return ans;
8        }
9
10        unordered_map<char, int> pMap;
11
12        for (char ch : p) {
13            pMap[ch]++;
14        }
15
16        int k = p.size();
17
18        for (int i = 0; i <= s.size() - k; i++) {
19
20            unordered_map<char, int> sMap;
21
22            for (int j = i; j < i + k; j++) {
23                sMap[s[j]]++;
24            }
25
26            if (sMap == pMap) {
27                ans.push_back(i);
28            }
29        }
30
31        return ans;
32    }
33};