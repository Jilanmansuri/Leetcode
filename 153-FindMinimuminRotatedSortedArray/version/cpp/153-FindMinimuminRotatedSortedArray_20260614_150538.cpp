// Last updated: 14/06/2026, 15:05:38
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int mn=nums[0];
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]<mn){
7                mn=nums[i];
8            }
9        }
10        return mn;
11    }
12};