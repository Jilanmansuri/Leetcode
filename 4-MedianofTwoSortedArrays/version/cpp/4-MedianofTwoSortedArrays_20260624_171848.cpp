// Last updated: 24/06/2026, 17:18:48
1
2class Solution {
3public:
4    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
5        vector<int> arr;
6
7        // merge both arrays
8        arr.insert(arr.end(), nums1.begin(), nums1.end());
9        arr.insert(arr.end(), nums2.begin(), nums2.end());
10
11        sort(arr.begin(), arr.end());
12
13        int n = arr.size();
14
15        if (n % 2 == 0) {
16            return (arr[n/2 - 1] + arr[n/2]) / 2.0;
17        } else {
18            return arr[n/2];
19        }
20    }
21};