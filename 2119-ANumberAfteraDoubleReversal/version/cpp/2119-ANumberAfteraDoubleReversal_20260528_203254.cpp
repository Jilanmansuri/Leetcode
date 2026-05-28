// Last updated: 28/05/2026, 20:32:54
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            int count = 0;
10
11            for (int j = 0; j < nums.size(); j++) {
12
13                if (nums[j] < nums[i]) {
14                    count++;
15                }
16            }
17
18            ans.push_back(count);
19        }
20
21        return ans;
22    }
23};