// Last updated: 08/06/2026, 11:49:15
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        for (int i = 0; i < nums.size(); i++) {
5
6            for (int j = i + 1; j <= i + k && j < nums.size(); j++) {
7
8                if (nums[i] == nums[j]) {
9                    return true;
10                }
11            }
12        }
13
14        return false;
15    }
16};