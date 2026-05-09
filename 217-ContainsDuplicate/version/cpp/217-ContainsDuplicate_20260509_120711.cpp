// Last updated: 09/05/2026, 12:07:11
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp;
5     for(int num :nums){
6        mp[num]++;
7        if(mp[num]>=2){
8            return true;
9        }
10     }  
11     return false;
12    }
13};