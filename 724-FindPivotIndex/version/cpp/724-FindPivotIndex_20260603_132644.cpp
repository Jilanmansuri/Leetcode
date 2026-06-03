// Last updated: 03/06/2026, 13:26:44
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        unordered_map<int,int>mp;
5        int count=0;
6        for(int num:nums){
7            count+=mp[num];
8            mp[num]++;
9        }
10        return count;
11    }
12};