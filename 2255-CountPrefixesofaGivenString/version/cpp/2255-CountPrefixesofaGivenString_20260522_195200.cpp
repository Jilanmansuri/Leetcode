// Last updated: 22/05/2026, 19:52:00
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4
5        int low = 0;
6        int mid = 0;
7        int high = nums.size() - 1;
8
9        while (mid <= high) {
10
11            if (nums[mid] == 0) {
12
13                swap(nums[low], nums[mid]);
14                low++;
15                mid++;
16
17            }
18            else if (nums[mid] == 1) {
19
20                mid++;
21
22            }
23            else {
24
25                swap(nums[mid], nums[high]);
26                high--;
27
28            }
29        }
30    }
31};