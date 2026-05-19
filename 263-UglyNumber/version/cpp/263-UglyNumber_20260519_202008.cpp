// Last updated: 19/05/2026, 20:20:08
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int target){
4        int count=0;
5        for(int i=0;i<nums.size();i++)
6            for(int j=i+1; j<nums.size();j++)
7                if(nums[i]+nums[j]<target)
8                    count++;
9        return count;
10    }
11};