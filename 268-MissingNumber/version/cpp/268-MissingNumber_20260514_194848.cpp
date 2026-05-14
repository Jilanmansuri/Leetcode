// Last updated: 14/05/2026, 19:48:48
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5
6        int expectedSum = (n * (n + 1)) / 2;
7        int actualSum = 0;
8
9        for (int num : nums) {
10            actualSum += num;
11        }
12
13        return expectedSum - actualSum;
14    }
15};