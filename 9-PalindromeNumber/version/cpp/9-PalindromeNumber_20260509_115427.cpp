// Last updated: 09/05/2026, 11:54:27
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0)
5            return false;
6        int original = x;
7        long long rev = 0;
8        while (x > 0) {
9            int digit = x % 10;
10            rev = rev * 10 + digit;
11            x /= 10;
12        }
13        return original == rev;
14    }
15};