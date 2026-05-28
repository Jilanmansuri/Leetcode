// Last updated: 28/05/2026, 20:56:05
1class Solution {
2public:
3    vector<int> decompressRLElist(vector<int>& nums) {
4
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size(); i += 2) {
8
9            int freq = nums[i];
10            int val = nums[i + 1];
11
12            for (int j = 0; j < freq; j++) {
13                ans.push_back(val);
14            }
15        }
16
17        return ans;
18    }
19};