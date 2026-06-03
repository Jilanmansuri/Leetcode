// Last updated: 03/06/2026, 20:44:36
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        unordered_set<int>seen;
5        for(int num:nums){
6            if(seen.count(num)){
7                return num;
8            }
9            seen.insert(num);
10        }
11        return -1;
12    }
13};