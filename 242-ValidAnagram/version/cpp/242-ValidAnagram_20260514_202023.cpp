// Last updated: 14/05/2026, 20:20:23
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4
5        if (s.size() != t.size()) {
6            return false;
7        }
8
9        vector<int> freq(26, 0);
10
11        // Count characters of s
12        for (char ch : s) {
13            freq[ch - 'a']++;
14        }
15
16        // Remove characters using t
17        for (char ch : t) {
18            freq[ch - 'a']--;
19        }
20
21        // Check all values are 0
22        for (int count : freq) {
23            if (count != 0) {
24                return false;
25            }
26        }
27
28        return true;
29    }
30};