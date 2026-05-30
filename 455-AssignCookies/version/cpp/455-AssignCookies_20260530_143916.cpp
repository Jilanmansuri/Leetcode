// Last updated: 30/05/2026, 14:39:16
1class Solution {
2public:
3    int arrangeCoins(int n) {
4        int rows = 0;
5
6        while (n > rows) {
7            rows++;
8            n -= rows;
9        }
10
11        return rows;
12    }
13};