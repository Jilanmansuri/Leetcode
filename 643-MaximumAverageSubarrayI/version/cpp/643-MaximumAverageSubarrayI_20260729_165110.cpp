// Last updated: 29/07/2026, 16:51:10
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int left = 0;
5        int right = 0;
6        int sum = 0;
7        int maxi =INT_MIN ;
8        while (right < nums.size()) {
9            sum += nums[right];
10            if (right - left + 1 == k) {
11                maxi = max(maxi, sum);
12                sum -= nums[left];
13                left++;
14            }
15            right++;
16        }
17        return (double)maxi / k;
18    }
19};