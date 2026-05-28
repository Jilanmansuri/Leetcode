// Last updated: 28/05/2026, 19:48:51
1class Solution {
2public:
3    bool canReach(string s, int minJump, int maxJump) {
4        int n = s.size();
5
6        vector<bool> dp(n, false);
7        dp[0] = true;
8
9        int reachable = 0;
10
11        for (int i = 1; i < n; i++) {
12
13            if (i - minJump >= 0 && dp[i - minJump]) {
14                reachable++;
15            }
16
17            if (i - maxJump - 1 >= 0 && dp[i - maxJump - 1]) {
18                reachable--;
19            }
20
21            if (reachable > 0 && s[i] == '0') {
22                dp[i] = true;
23            }
24        }
25
26        return dp[n - 1];
27    }
28};