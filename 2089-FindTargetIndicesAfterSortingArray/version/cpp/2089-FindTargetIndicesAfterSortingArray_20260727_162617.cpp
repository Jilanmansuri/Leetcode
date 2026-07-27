// Last updated: 27/07/2026, 16:26:17
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        vector<int> ans;
5        int smaller = 0;
6        int equal = 0;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] < target) {
9                smaller++;
10            } else if (nums[i] == target) {
11                equal++;
12            }
13        }
14        for (int i = smaller; i <smaller + equal; i++) {
15            ans.push_back(i);
16        }
17        return ans;
18    }
19};