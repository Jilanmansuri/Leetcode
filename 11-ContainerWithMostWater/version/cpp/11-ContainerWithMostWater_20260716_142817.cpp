// Last updated: 16/07/2026, 14:28:17
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4
5        int left = 0;
6        int right = height.size() - 1;
7
8        int ans = 0;
9
10        while (left < right) {
11
12            int h = min(height[left], height[right]);
13            int w = right - left;
14
15            ans = max(ans, h * w);
16
17            if (height[left] < height[right])
18                left++;
19            else
20                right--;
21        }
22
23        return ans;
24    }
25};