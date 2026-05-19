// Last updated: 19/05/2026, 20:31:10
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4
5        if(num == 0){
6            return true;
7        }
8
9        return num % 10 != 0;
10    }
11};