// Last updated: 28/05/2026, 20:38:10
1class Solution {
2public:
3    vector<int> decode(vector<int>& encoded, int first) {
4
5        vector<int> arr;
6
7        arr.push_back(first);
8
9        for (int i = 0; i < encoded.size(); i++) {
10
11            int next = encoded[i] ^ arr[i];
12
13            arr.push_back(next);
14        }
15
16        return arr;
17    }
18};