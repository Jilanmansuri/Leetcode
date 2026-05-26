// Last updated: 26/05/2026, 11:57:25
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4
5        int mn = nums[0];
6        int mx = nums[0];
7
8        for (int i = 0; i < nums.size(); i++) {
9            mn = min(mn, nums[i]);
10            mx = max(mx, nums[i]);
11        }
12
13        return gcd(mn, mx);
14    }
15};