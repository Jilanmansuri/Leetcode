// Last updated: 16/07/2026, 17:59:27
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int num : nums) {
7            mp[num]++;
8        }
9
10        vector<int> ans;
11
12        for (int i = 1; i <= nums.size(); i++) {
13            if (mp.find(i) == mp.end()) {
14                ans.push_back(i);
15            }
16        }
17
18        return ans;
19    }
20};