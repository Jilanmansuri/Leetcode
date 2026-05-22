// Last updated: 22/05/2026, 20:13:40
1class Solution {
2public:
3    string removeTrailingZeros(string num) {
4
5        while (num.back() == '0') {
6            num.pop_back();
7        }
8
9        return num;
10    }
11};