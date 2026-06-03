// Last updated: 03/06/2026, 12:44:53
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int reach=0;
5
6        for(int i=0;i<nums.size();i++){
7            if(i>reach){
8                return false;
9            }
10            reach = max(reach,i+nums[i]);
11        }
12        return true;
13    }
14};