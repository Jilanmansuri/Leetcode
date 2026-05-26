// Last updated: 26/05/2026, 11:50:59
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int mn = nums[0];
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] < mn) {
8                mn = nums[i];
9            }
10        }
11
12        return mn;
13    }
14};