// Last updated: 13/06/2026, 10:20:52
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int, int> mp;
5        int score = 0;
6        while (n > 0) {
7            int digit = n % 10;
8            mp[digit]++;
9            n /= 10;
10        }
11        for (auto it : mp) {
12            score += it.first*it.second;
13        }
14
15        return score;
16    }
17};