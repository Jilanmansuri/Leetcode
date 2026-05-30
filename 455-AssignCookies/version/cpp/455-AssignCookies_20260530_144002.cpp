// Last updated: 30/05/2026, 14:40:02
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int left = 1, right = n;
8
9        while (left < right) {
10            int mid = left + (right - left) / 2;
11
12            if (isBadVersion(mid))
13                right = mid;
14            else
15                left = mid + 1;
16        }
17
18        return left;
19    }
20};