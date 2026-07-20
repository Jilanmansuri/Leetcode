// Last updated: 20/07/2026, 15:10:39
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int left = 0;
5        int right = nums.size() - 1;
6
7        vector<int> ans(nums.size());
8
9        int i = nums.size() - 1;
10
11        while (left <= right) {
12            if (abs(nums[left]) > abs(nums[right])) {
13                ans[i] = nums[left] * nums[left];
14                left++;
15            } else {
16                ans[i] = nums[right] * nums[right];
17                right--;
18            }
19            i--;
20        }
21
22        return ans;
23    }
24};
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
35// class Solution {
36// public:
37//     vector<int> sortedSquares(vector<int>& nums) {
38//         for(int i=0;i<nums.size();i++){
39//             nums[i]=nums[i]*nums[i];
40//         }
41//         sort(nums.begin(),nums.end());
42//         return nums;
43//     }
44// };