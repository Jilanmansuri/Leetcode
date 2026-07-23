// Last updated: 23/07/2026, 14:05:00
1class Solution {
2public:
3    int countKDifference(vector<int>& nums, int k) {
4        int count = 0;
5
6        for (int i = 0; i < nums.size(); i++) {
7            for (int j = i + 1; j < nums.size(); j++) {
8                if (abs(nums[i] - nums[j]) == k) {
9                    count++;
10                }
11            }
12        }
13
14        return count;
15    }
16};