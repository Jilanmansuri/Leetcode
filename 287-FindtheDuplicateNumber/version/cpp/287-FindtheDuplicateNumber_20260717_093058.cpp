// Last updated: 17/07/2026, 09:30:58
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(int num:nums){
6            if(mp[num]>0){
7                return num;
8            }
9            mp[num]++;
10        }
11        return -1;
12    }
13};