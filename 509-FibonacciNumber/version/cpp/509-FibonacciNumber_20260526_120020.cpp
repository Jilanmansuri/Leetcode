// Last updated: 26/05/2026, 12:00:20
1class Solution {
2public:
3    int fib(int n) {
4        
5        if (n <= 1) {
6            return n;
7        }
8
9        int a = 0;
10        int b = 1;
11
12        for (int i = 2; i <= n; i++) {
13            int c = a + b;
14            a = b;
15            b = c;
16        }
17
18        return b;
19    }
20};