// Last updated: 29/07/2026, 16:51:23
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int left = 0, right = 0, sum = 0, count = 0;
5        while (right < arr.size()) {
6            sum += arr[right];
7            if (right - left + 1 == k) {
8                if (sum / k >= threshold) {
9                    count++;
10                }
11                sum -= arr[left];
12                left++;
13            }
14            right++;
15        }
16        return count;
17    }
18};