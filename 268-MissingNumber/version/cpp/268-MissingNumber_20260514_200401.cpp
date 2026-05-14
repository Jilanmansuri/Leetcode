// Last updated: 14/05/2026, 20:04:01
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int,int>mp;
5        for(int num:nums){
6            mp[num]++;
7        }
8        for(auto i:mp){
9            if(i.second == 1){
10                return i.first;
11            }
12        }
13        return -1;
14    }
15};