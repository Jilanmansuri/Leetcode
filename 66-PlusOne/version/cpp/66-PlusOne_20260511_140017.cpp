// Last updated: 11/05/2026, 14:00:17
1class Solution {
2public:
3    int reverse(int x) {
4
5        int rev = 0;
6
7        while(x != 0) {
8
9            int digit = x % 10;
10
11            if(rev > INT_MAX / 10 || rev < INT_MIN / 10) {
12                return 0;
13            }
14
15            rev = rev * 10 + digit;
16
17            x /= 10;
18        }
19
20        return rev;
21    }
22};