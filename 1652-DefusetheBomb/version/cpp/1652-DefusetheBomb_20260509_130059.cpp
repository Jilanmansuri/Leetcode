// Last updated: 09/05/2026, 13:00:59
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int even = 0;
5        for(int num : nums) {
6            int count = 0;
7            while (num > 0) {
8                int digit = num % 10;
9                count++;
10                num = num / 10;
11            }
12            if (count % 2 == 0) {
13                even++;
14            }
15        }
16        return even;
17    }
18};