// Last updated: 23/07/2026, 09:36:07
1class Solution {
2public:
3    string frequencySort(string s) {
4        unordered_map<char, int> mp;
5
6        // Count frequency
7        for (char ch : s) {
8            mp[ch]++;
9        }
10
11        // Store in vector
12        vector<pair<char, int>> v;
13        for (auto it : mp) {
14            v.push_back(it);
15        }
16
17        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
18            return a.second > b.second;
19        });
20
21        string ans = "";
22
23        for (auto it : v) {
24            ans += string(it.second, it.first);
25        }
26
27        return ans;
28    }
29};