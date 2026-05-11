// Last updated: 11/05/2026, 13:07:34
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int maxcount = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 0) {
8                count = 0;
9            } else {
10                count++;
11            }
12            if (count > maxcount) {
13                maxcount = count;
14            }
15        }
16        return maxcount;
17    }
18};