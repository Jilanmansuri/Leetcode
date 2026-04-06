// Last updated: 06/04/2026, 10:42:35
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        vector<int> freq(nums.size(), 0);
5
6        for(int num : nums){
7            if(freq[num] == 1){
8                return num;  
9            }
10            freq[num]++;
11        }
12        return -1;
13    }
14};