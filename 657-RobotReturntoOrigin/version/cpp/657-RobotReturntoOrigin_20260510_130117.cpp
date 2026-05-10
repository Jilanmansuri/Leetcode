// Last updated: 10/05/2026, 13:01:17
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0;
5        int y = 0;
6        for (int step : moves) {
7            if (step == 'L') {
8                x--;
9            }
10            else if (step == 'R') {
11                x++;
12            }
13
14            else if (step == 'U') {
15                y++;
16            }
17
18            else {
19                y--;
20            }
21        }
22        return (x==0 && y==0);
23    }
24};