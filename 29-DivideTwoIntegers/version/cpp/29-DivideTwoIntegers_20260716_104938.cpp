// Last updated: 16/07/2026, 10:49:38
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4
5        if (dividend == INT_MIN && divisor == -1)
6            return INT_MAX;
7
8        long long a = llabs((long long)dividend);
9        long long b = llabs((long long)divisor);
10
11        long long ans = 0;
12
13        while (a >= b) {
14
15            long long temp = b;
16            long long multiple = 1;
17
18            while ((temp << 1) <= a) {
19                temp <<= 1;
20                multiple <<= 1;
21            }
22
23            a -= temp;
24            ans += multiple;
25        }
26
27        if ((dividend < 0) ^ (divisor < 0))
28            ans = -ans;
29
30        return (int)ans;
31    }
32};