// Last updated: 28/07/2026, 16:25:26
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4        return max(nums.front(), nums.back());
5    }
6};