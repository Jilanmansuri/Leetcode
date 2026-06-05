// Last updated: 05/06/2026, 19:58:10
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4         int maxindex=0;
5         for(int i=0;i<nums.size();i++){
6            if(nums[i]> nums[maxindex]){
7                maxindex=i;
8            }
9         }
10         for(int i=0;i<nums.size();i++){
11            if(i!=maxindex && nums[maxindex] < 2*nums[i]){
12                return -1;
13            }
14         }
15         return maxindex;
16    }
17};