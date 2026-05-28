// Last updated: 28/05/2026, 21:21:41
1class Solution {
2public:
3    int findNonMinOrMax(vector<int>& nums) {
4
5        if (nums.size() < 3) {
6            return -1;
7        }
8
9        sort(nums.begin(), nums.end());
10
11        return nums[1];
12    }
13};