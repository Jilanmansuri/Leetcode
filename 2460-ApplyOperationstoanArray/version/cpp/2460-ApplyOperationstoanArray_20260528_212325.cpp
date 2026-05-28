// Last updated: 28/05/2026, 21:23:25
1class Solution {
2public:
3    vector<int> applyOperations(vector<int>& nums) {
4
5        int n = nums.size();
6
7        for (int i = 0; i < n - 1; i++) {
8
9            if (nums[i] == nums[i + 1]) {
10
11                nums[i] *= 2;
12                nums[i + 1] = 0;
13            }
14        }
15
16        vector<int> ans;
17
18        for (int x : nums) {
19
20            if (x != 0) {
21                ans.push_back(x);
22            }
23        }
24
25        while (ans.size() < n) {
26            ans.push_back(0);
27        }
28
29        return ans;
30    }
31};