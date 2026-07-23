// Last updated: 23/07/2026, 13:34:07
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool increasing = true;
5        bool decreasing = true;
6
7        for (int i = 0; i < nums.size() - 1; i++) {
8            if (nums[i] > nums[i + 1])
9                increasing = false;
10
11            if (nums[i] < nums[i + 1])
12                decreasing = false;
13        }
14
15        return increasing || decreasing;
16    }
17};