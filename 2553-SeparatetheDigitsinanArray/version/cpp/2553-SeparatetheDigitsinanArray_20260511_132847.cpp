// Last updated: 11/05/2026, 13:28:47
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4
5        vector<int> res;
6
7        for(int num : nums) {
8
9            vector<int> temp;
10
11            while(num > 0) {
12
13                int digit = num % 10;
14
15                temp.push_back(digit);
16
17                num /= 10;
18            }
19
20            reverse(temp.begin(), temp.end());
21
22            for(int d : temp) {
23                res.push_back(d);
24            }
25        }
26
27        return res;
28    }
29};