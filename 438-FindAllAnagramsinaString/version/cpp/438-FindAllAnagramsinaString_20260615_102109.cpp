// Last updated: 15/06/2026, 10:21:09
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> ans;
5
6        int n = s.size();
7        int m = p.size();
8
9        if (m > n) return ans;
10
11        vector<int> pFreq(26, 0);
12        vector<int> wFreq(26, 0);
13
14        for (int i = 0; i < m; i++) {
15            pFreq[p[i] - 'a']++;
16            wFreq[s[i] - 'a']++;
17        }
18
19        if (pFreq == wFreq) {
20            ans.push_back(0);
21        }
22
23        for (int i = m; i < n; i++) {
24            wFreq[s[i] - 'a']++;       
25            wFreq[s[i - m] - 'a']--;   
26
27            if (pFreq == wFreq) {
28                ans.push_back(i - m + 1);
29            }
30        }
31
32        return ans;
33    }
34};