// Last updated: 28/05/2026, 19:57:16
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4
5        int maxWealth = 0;
6
7        for (int i = 0; i < accounts.size(); i++) {
8
9            int wealth = 0;
10
11            for (int j = 0; j < accounts[i].size(); j++) {
12                wealth += accounts[i][j];
13            }
14
15            maxWealth = max(maxWealth, wealth);
16        }
17
18        return maxWealth;
19    }
20};