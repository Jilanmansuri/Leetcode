// Last updated: 03/06/2026, 13:13:07
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n=nums.size();
5        int expected=n * (n+1)/2;
6
7        int actual =0;
8        for(int num:nums){
9            actual+=num;
10        }
11    return expected -actual;
12    }
13};