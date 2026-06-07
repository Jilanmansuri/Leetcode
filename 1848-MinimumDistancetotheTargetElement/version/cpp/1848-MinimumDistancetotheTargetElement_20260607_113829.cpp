// Last updated: 07/06/2026, 11:38:29
1class Solution {
2public:
3    int getMinDistance(vector<int>& nums, int target, int start) {
4        int mn=INT_MAX;
5        for(int i=0;i<nums.size();i++){
6          if(nums[i] == target ){
7            if(abs(i-start)<mn){
8             mn=abs(i-start);
9            }
10          }
11        }
12        return mn;
13    }
14};