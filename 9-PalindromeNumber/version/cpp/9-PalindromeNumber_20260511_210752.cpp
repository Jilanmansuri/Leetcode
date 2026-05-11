// Last updated: 11/05/2026, 21:07:52
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0) {
5            return false;
6        }
7
8        int original = x;
9
10        long long rev = 0;
11
12        while (x > 0) {
13            int digit = x % 10;
14
15            rev = rev * 10 + digit;
16
17            x /= 10;
18        }
19
20        return original == rev;
21    }
22};