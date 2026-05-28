// Last updated: 28/05/2026, 19:34:45
1class Solution {
2public:
3    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
4        int min1 = *min_element(nums1.begin(), nums1.end());
5        int min2 = *min_element(nums2.begin(), nums2.end());
6
7        return min2 - min1;
8    }
9};