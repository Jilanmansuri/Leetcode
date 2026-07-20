// Last updated: 20/07/2026, 11:04:55
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4
5        int num1 = 0;
6        int num2 = 0;
7
8        for (int i = 1; i <= n; i++) {
9            if (i % m == 0)
10                num2 += i;
11            else
12                num1 += i;
13        }
14
15        return num1 - num2;
16    }
17};