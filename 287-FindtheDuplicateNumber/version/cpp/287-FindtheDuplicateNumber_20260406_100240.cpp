// Last updated: 06/04/2026, 10:02:40
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        vector<int> freq(nums.size(), 0);
6
7        for(int num : nums){
8            if(freq[num] == 1){
9                return num;  // duplicate mil gaya
10            }
11            freq[num]++;
12        }
13
14        return -1;
15    }
16};