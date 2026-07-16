// Last updated: 16/07/2026, 14:04:29
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4
5        unordered_map<char, int> mp;
6
7        int left = 0;
8        int ans = 0;
9
10        for (int right = 0; right < s.size(); right++) {
11
12            if (mp.count(s[right])) {
13                left = max(left, mp[s[right]] + 1);
14            }
15
16            mp[s[right]] = right;
17
18            ans = max(ans, right - left + 1);
19        }
20
21        return ans;
22    }
23};