// Last updated: 11/05/2026, 13:29:04
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4
5        vector<int> res;
6
7        for(int num : nums) {
8
9            int start = res.size();
10
11            while(num > 0) {
12
13                int digit = num % 10;
14
15                res.insert(res.begin() + start, digit);
16
17                num /= 10;
18            }
19        }
20
21        return res;
22    }
23};