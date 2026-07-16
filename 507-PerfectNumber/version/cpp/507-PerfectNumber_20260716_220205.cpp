// Last updated: 16/07/2026, 22:02:05
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        if (num == 1) {
5            return false;
6        }
7        int sum=0;
8        for (int i = 1; i < num; i++) {
9            if (num % i == 0) {
10                sum+=i;
11            }
12        }
13        return sum==num;
14    }
15};