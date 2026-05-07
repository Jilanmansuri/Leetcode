// Last updated: 07/05/2026, 19:23:58
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        
5        unordered_map<int, int> mp;
6
7        for (int x : nums) {
8            mp[x]++;
9        }
10
11        int sum = 0;
12
13        for (auto x : mp) {
14            if (x.second == 1) {
15                sum += x.first;
16            }
17        }
18
19        return sum;
20    }
21};