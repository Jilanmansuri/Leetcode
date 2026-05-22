// Last updated: 22/05/2026, 19:49:44
1class Solution {
2public:
3    int minimumArrayLength(vector<int>& nums) {
4
5        int mn = *min_element(nums.begin(), nums.end());
6
7        int count = 0;
8
9        for (int x : nums) {
10
11            
12            if (x % mn != 0) {
13                return 1;
14            }
15
16            if (x == mn) {
17                count++;
18            }
19        }
20
21       
22        return (count + 1) / 2;
23    }
24};