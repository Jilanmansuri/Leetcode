// Last updated: 26/06/2026, 23:15:59
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0;i<nums.size();i++){
6
7            int complement = target-nums[i];
8
9            if(mp.find(complement)!=mp.end()){
10                return {mp[complement],i};
11
12            }
13            mp[nums[i]]=i;
14        }
15        return {};
16    }
17};