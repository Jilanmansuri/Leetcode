// Last updated: 28/05/2026, 21:20:13
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        sort(nums.begin(), nums.end());
6
7        return nums[nums.size() - k];
8    }
9};