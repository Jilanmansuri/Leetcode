// Last updated: 23/07/2026, 10:42:24
1class Solution {
2public:
3    int findComplement(int num) {
4        int mask = 1;
5
6        while (mask < num) {
7            mask = (mask << 1) | 1;
8        }
9
10        return mask ^ num;
11    }
12};