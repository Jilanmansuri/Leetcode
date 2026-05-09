// Last updated: 09/05/2026, 12:53:02
1class Solution {
2public:
3    int maxProduct(int n) {
4        int max = 0, secondmax = 0;
5        while (n > 0) {
6            int digit = n % 10;
7            if (digit > max) {
8                secondmax = max;
9                max = digit;
10            } else if (digit > secondmax) {
11                secondmax = digit;
12            }
13            n = n / 10;
14        }
15        return max * secondmax;
16    }
17};