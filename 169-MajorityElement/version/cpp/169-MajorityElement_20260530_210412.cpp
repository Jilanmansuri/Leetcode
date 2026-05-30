// Last updated: 30/05/2026, 21:04:12
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4       unordered_map<int,int>mp;
5       for(int num:nums){
6        mp[num]++;
7
8        if(mp[num]>nums.size()/2){
9            return num;
10        }
11       } 
12       return -1;
13    }
14};