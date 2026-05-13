// Last updated: 13/05/2026, 13:03:31
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        for(int i=0;i<nums.size();i++){
5
6            if(nums[i] == target){
7                return i;
8            }
9
10             if(nums[i] > target){
11                return i;
12            }
13
14        }
15        return nums.size();
16    }
17};