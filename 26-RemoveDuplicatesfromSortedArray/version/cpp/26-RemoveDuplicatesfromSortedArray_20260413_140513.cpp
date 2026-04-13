// Last updated: 13/04/2026, 14:05:13
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4       
5
6        int i=0;
7        for(int j=1;j<nums.size();j++){
8            if(nums[j] != nums[i]){
9                i++;
10                nums[i]= nums[j];
11            }
12        }
13        return i+1;
14    }
15};