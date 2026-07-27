// Last updated: 27/07/2026, 16:28:06
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> ans;
7
8        for (int i = 0; i < nums.size(); i++) {
9            if (nums[i] == target) {
10                ans.push_back(i);
11            }
12        }
13
14        return ans;
15    }
16};
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38// class Solution {
39// public:
40//     vector<int> targetIndices(vector<int>& nums, int target) {
41//         vector<int> ans;
42//         int smaller = 0;
43//         int equal = 0;
44//         for (int i = 0; i < nums.size(); i++) {
45//             if (nums[i] < target) {
46//                 smaller++;
47//             } else if (nums[i] == target) {
48//                 equal++;
49//             }
50//         }
51//         for (int i = smaller; i <smaller + equal; i++) {
52//             ans.push_back(i);
53//         }
54//         return ans;
55//     }
56// };