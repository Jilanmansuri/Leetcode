// Last updated: 16/07/2026, 22:16:41
1class Solution {
2public:
3    bool isSelfDividing(int num) {
4
5        int temp = num;
6
7        while (temp > 0) {
8            int digit = temp % 10;
9            if (digit == 0) {
10                return false;
11            }
12
13            if (num % digit != 0) {
14                return false;
15            }
16
17            temp /= 10;
18        }
19        return true;
20    }
21
22    vector<int> selfDividingNumbers(int left, int right) {
23
24        vector<int> ans;
25        for (int i = left; i <= right; i++) {
26            if (isSelfDividing(i)) {
27                ans.push_back(i);
28            }
29        }
30
31        return ans;
32    }
33};