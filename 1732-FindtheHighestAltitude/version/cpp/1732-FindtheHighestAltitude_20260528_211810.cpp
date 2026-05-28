// Last updated: 28/05/2026, 21:18:10
1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4
5        int current = 0;
6        int maxAltitude = 0;
7
8        for (int i = 0; i < gain.size(); i++) {
9
10            current += gain[i];
11
12            maxAltitude = max(maxAltitude, current);
13        }
14
15        return maxAltitude;
16    }
17};