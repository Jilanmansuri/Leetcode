// Last updated: 07/06/2026, 11:47:32
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int num : nums) {
7            mp[num]++;
8        }
9
10        for (auto it : mp) {
11            if (it.second == 1) {
12                return it.first;
13            }
14        }
15        return -1;
16    }
17};