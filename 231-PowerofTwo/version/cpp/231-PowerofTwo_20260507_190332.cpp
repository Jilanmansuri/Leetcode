// Last updated: 07/05/2026, 19:03:32
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        if (n <= 0)
5            return false;
6
7        while (n % 2 ==  0) {
8            n = n / 2;
9        }
10
11        return n ==  1;
12    }
13};