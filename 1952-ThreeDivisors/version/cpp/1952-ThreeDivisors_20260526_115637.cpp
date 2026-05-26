// Last updated: 26/05/2026, 11:56:37
1class Solution {
2public:
3    bool isThree(int n) {
4        int count = 0;
5        for (int i = 1; i <= n; i++) {
6            if (n % i == 0) {
7                count++;
8            }
9        }
10        return count == 3;
11    }
12};