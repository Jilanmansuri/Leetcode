// Last updated: 16/07/2026, 10:49:03
1class Solution {
2public:
3    char processStr(string s, long long k) {
4        long long m = 0;
5
6        // Calculate final length
7        for (char c : s) {
8            if (c == '*') {
9                m = max(0LL, m - 1);
10            } 
11            else if (c == '#') {
12                m <<= 1;
13            } 
14            else if (c != '%') {
15                m++;
16            }
17        }
18
19        if (k >= m) return '.';
20
21        // Reverse process
22        for (int i = s.size() - 1; ; i--) {
23            char c = s[i];
24
25            if (c == '*') {
26                m++;
27            } 
28            else if (c == '#') {
29                m /= 2;
30                if (k >= m)
31                    k -= m;
32            } 
33            else if (c == '%') {
34                k = m - 1 - k;
35            } 
36            else {
37                m--;
38                if (k == m)
39                    return c;
40            }
41        }
42
43        return '.';
44    }
45};