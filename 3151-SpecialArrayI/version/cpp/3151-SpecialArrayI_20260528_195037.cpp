// Last updated: 28/05/2026, 19:50:37
1class Solution {
2public:
3    string licenseKeyFormatting(string s, int k) {
4        string temp = "";
5
6        for (char c : s) {
7            if (c != '-') {
8                temp += toupper(c);
9            }
10        }
11
12        string ans = "";
13        int count = 0;
14
15        for (int i = temp.size() - 1; i >= 0; i--) {
16
17            ans += temp[i];
18            count++;
19
20            if (count == k && i != 0) {
21                ans += '-';
22                count = 0;
23            }
24        }
25
26        reverse(ans.begin(), ans.end());
27
28        return ans;
29    }
30};