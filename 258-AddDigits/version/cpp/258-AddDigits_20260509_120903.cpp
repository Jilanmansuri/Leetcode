// Last updated: 09/05/2026, 12:09:03
1class Solution {
2public:
3    int addDigits(int num) {
4        int digit= 1+ (num-1)%9;
5        return digit;
6    }
7};