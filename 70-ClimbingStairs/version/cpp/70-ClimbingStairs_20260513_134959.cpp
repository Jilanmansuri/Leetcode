// Last updated: 13/05/2026, 13:49:59
1class Solution {
2public:
3    int climbStairs(int n) {
4
5        if(n <= 2){
6            return n;
7        }
8
9        int a = 1;
10        int b = 2;
11
12        for(int i = 3; i <= n; i++){
13
14            int c = a + b;
15
16            a = b;
17            b = c;
18        }
19
20        return b;
21    }
22};