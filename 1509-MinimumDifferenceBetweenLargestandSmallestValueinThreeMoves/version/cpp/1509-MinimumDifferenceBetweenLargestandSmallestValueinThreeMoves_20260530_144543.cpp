// Last updated: 30/05/2026, 14:45:43
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int left = 0, ans = 0;
6
7        for (int right = 0; right < s.size(); right++) {
8            while (st.count(s[right])) {
9                st.erase(s[left]);
10                left++;
11            }
12
13            st.insert(s[right]);
14            ans = max(ans, right - left + 1);
15        }
16
17        return ans;
18    }
19};