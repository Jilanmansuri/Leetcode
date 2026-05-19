// Last updated: 19/05/2026, 20:32:46
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        vector<int>ans;
5        for(int i:nums) ans.push_back(nums[i]);
6        return ans;
7    }
8};