// Last updated: 30/05/2026, 14:42:18
1class Solution {
2public:
3    int minDifference(vector<int>& nums) {
4        int n = nums.size();
5
6        if (n <= 4) return 0;
7
8        sort(nums.begin(), nums.end());
9
10        int ans = INT_MAX;
11
12        ans = min(ans, nums[n - 4] - nums[0]); // remove 3 largest
13        ans = min(ans, nums[n - 3] - nums[1]); // remove 2 largest, 1 smallest
14        ans = min(ans, nums[n - 2] - nums[2]); // remove 1 largest, 2 smallest
15        ans = min(ans, nums[n - 1] - nums[3]); // remove 3 smallest
16
17        return ans;
18    }
19};