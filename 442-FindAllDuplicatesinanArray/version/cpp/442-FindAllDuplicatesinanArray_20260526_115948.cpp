// Last updated: 26/05/2026, 11:59:48
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            int index = abs(nums[i]) - 1;
10
11            if (nums[index] < 0) {
12                ans.push_back(index + 1);
13            }
14
15            nums[index] = -nums[index];
16        }
17
18        return ans;
19    }
20};