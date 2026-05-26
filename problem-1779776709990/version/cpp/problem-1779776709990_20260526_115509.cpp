// Last updated: 26/05/2026, 11:55:09
1class Solution {
2public:
3    int maximumCount(vector<int>& nums) {
4        int pos = 0;
5        int neg = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            
9            if (nums[i] > 0) {
10                pos++;
11            }
12            else if (nums[i] < 0) {
13                neg++;
14            }
15        }
16
17        return max(pos, neg);
18    }
19};