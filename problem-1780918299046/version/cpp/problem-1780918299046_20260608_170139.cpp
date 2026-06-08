// Last updated: 08/06/2026, 17:01:39
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> less, equal, greater;
5
6        for (int num : nums) {
7            if (num < pivot) {
8                less.push_back(num);
9            }
10            else if (num == pivot) {
11                equal.push_back(num);
12            }
13            else {
14                greater.push_back(num);
15            }
16        }
17
18        vector<int> ans;
19
20        for (int num : less) {
21            ans.push_back(num);
22        }
23
24        for (int num : equal) {
25            ans.push_back(num);
26        }
27
28        for (int num : greater) {
29            ans.push_back(num);
30        }
31
32        return ans;
33    }
34};