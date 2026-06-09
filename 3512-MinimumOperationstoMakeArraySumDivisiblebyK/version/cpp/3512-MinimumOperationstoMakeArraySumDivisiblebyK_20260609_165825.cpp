// Last updated: 09/06/2026, 16:58:25
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        
5        int sum=0;
6        for(int num:nums){
7            sum+=num;
8        }
9       int count=sum%k;
10
11    return count;
12    }
13};