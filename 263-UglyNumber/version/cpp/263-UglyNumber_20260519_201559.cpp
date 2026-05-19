// Last updated: 19/05/2026, 20:15:59
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int k) {
4        int count = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            for (int j = i + 1; j < nums.size(); j++) {
7                if (nums[i] == nums[j] && (i * j) % k == 0) {
8                    count++;
9                }
10            }
11        }
12        return count;
13    }
14};