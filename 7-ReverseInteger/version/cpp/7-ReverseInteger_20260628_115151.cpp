// Last updated: 28/06/2026, 11:51:51
1class Solution {
2public:
3    int reverse(int x) {
4        long long rev=0;
5
6        while(x !=0){
7            int digit =x %10;
8            rev=rev*10 +digit;
9            x/=10;
10        }
11        if(rev>INT_MAX || rev< INT_MIN){
12            return 0;
13        }
14        return rev;
15    }
16};