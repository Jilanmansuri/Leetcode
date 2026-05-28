// Last updated: 28/05/2026, 21:13:23
1class Solution {
2public:
3    int totalMoney(int n) {
4        int total = 0;
5        int week = 0;
6
7        for (int i = 1; i <= n; i++) {
8            total += week + (i - 1) % 7 + 1;
9
10            if (i % 7 == 0) {
11                week++;
12            }
13        }
14
15        return total;
16    }
17};