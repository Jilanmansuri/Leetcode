// Last updated: 10/05/2026, 11:47:28
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        int count = 0;
5        for (int i : arr) {
6            if (i % 2 == 1) {
7                count++;
8                if (count == 3) {
9                    return true;
10                }
11            } else {
12                count = 0;
13            }
14        }
15        return count == 3;
16    }
17};