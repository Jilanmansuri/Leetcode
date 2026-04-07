// Last updated: 07/04/2026, 11:59:30
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = 0;
5
6        for(int i = 0; i < nums.size(); i++) {
7            if(nums[i] != 0) {
8                nums[j] = nums[i];
9                j++;
10            }
11        }
12
13        for(int i = j; i < nums.size(); i++) {
14            nums[i] = 0;
15        }
16    }
17};