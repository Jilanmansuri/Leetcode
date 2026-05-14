// Last updated: 14/05/2026, 20:23:01
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4       
5           vector<int>arr;
6            int sum = 0;
7            for (int i = 0; i < nums.size(); i++) {
8                sum = sum + nums[i] ;
9                arr.push_back(sum);
10            }
11            return arr;
12    }
13};