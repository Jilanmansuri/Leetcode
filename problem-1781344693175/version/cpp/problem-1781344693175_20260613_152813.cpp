// Last updated: 13/06/2026, 15:28:13
1class Solution {
2public:
3    vector<vector<int>> findMatrix(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int maxi = 0;
6        for (int num : nums) {
7            mp[num]++;
8        }
9
10        for (auto it : mp) {
11            maxi = max(maxi, it.second);
12        }
13        vector<vector<int>>ans(maxi);
14
15        for (auto it : mp) {
16            int freq = it.second;
17            for (int i = 0; i < freq; i++) {
18                ans[i].push_back(it.first);
19            }
20        }
21
22        return ans;
23    }
24};