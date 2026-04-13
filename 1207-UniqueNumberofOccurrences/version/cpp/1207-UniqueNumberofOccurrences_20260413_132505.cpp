// Last updated: 13/04/2026, 13:25:05
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int, int> freq;
5        for (int num : arr) {
6            freq[num]++;
7        }
8        unordered_set<int> s;
9        for (auto it : freq) {
10            if (s.count(it.second)) {
11                return false;
12            }
13            s.insert(it.second);
14        }
15        return true;
16    }
17};