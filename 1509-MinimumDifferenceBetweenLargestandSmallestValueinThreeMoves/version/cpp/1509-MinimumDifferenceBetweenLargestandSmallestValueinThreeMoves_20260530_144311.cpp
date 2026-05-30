// Last updated: 30/05/2026, 14:43:11
1class Solution {
2public:
3    vector<int> evenOddBit(int n) {
4        int even = 0, odd = 0;
5        int pos = 0;
6
7        while (n > 0) {
8            if (n & 1) {
9                if (pos % 2 == 0)
10                    even++;
11                else
12                    odd++;
13            }
14
15            n >>= 1;
16            pos++;
17        }
18
19        return {even, odd};
20    }
21};