// Last updated: 28/05/2026, 19:45:35
1class Solution {
2public:
3    bool isArraySpecial(vector<int>& nums) {
4        for (int i = 1; i < nums.size(); i++) {
5            if (nums[i] % 2 == nums[i - 1] % 2) {
6                return false;
7            }
8        }
9
10        return true;
11    }
12};