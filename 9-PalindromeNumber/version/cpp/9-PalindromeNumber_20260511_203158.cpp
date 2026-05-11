// Last updated: 11/05/2026, 20:31:58
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0) {
5            return false;
6        }
7
8        int original = x;
9        long long rev = 0;
10
11        while (x > 0) {
12            int digit = x % 10;
13            rev = rev * 10 + digit;
14
15            x /= 10;
16        }
17
18        return original == rev;
19    }
20};