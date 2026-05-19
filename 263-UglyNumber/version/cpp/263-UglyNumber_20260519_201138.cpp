// Last updated: 19/05/2026, 20:11:38
1class Solution {
2public:
3    bool isUgly(int n) {
4        if (n <= 0) {
5            return false;
6        }
7
8        while (n % 2 == 0) {
9            n = n / 2;
10        }
11        while (n % 3 == 0) {
12            n = n / 3;
13        }
14        while (n % 5 == 0) {
15            n = n / 5;
16        }
17        return n == 1;
18    }
19};