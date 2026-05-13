// Last updated: 13/05/2026, 13:29:36
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++){
5            for(int j=i+1;j<nums.size();j++){
6                if(nums[i]== nums[j]){
7                    return nums[i];
8                }
9            }
10        }
11      return -1;
12    }
13};