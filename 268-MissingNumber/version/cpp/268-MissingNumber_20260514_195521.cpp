// Last updated: 14/05/2026, 19:55:21
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int result=0;
5        for(int num:nums){
6            result ^= num;
7        }
8        return result;
9    }
10};