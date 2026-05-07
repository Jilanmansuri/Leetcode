// Last updated: 07/05/2026, 18:59:43
1class Solution {
2public:
3    int minMoves(int target, int maxDoubles) {
4        int count = 0;
5        while (target > 1 && maxDoubles>0) {
6            if (target % 2 == 0) {
7                target /= 2;
8               
9                maxDoubles--;
10            } else {
11                target -= 1;
12             
13            }
14               count++;
15        }
16        count += (target-1);
17        return count;
18    }
19};