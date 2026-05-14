// Last updated: 14/05/2026, 19:48:09
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int sum = 0;
5        int tempsum = 0;
6        int n=nums.size();
7
8        tempsum = (n*(n+1))/2;
9        
10        for (int i : nums) {
11            sum += i;
12        }
13
14     return tempsum-sum;
15
16
17    }
18};