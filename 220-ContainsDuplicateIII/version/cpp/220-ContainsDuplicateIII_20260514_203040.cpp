// Last updated: 14/05/2026, 20:30:40
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4
5        vector<string> ans;
6
7        for (int i = 1; i <= n; i++) {
8
9            if (i % 3 == 0 && i % 5 == 0) {
10                ans.push_back("FizzBuzz");
11            }
12
13            else if (i % 3 == 0) {
14                ans.push_back("Fizz");
15            }
16
17            else if (i % 5 == 0) {
18                ans.push_back("Buzz");
19            }
20
21            else {
22                ans.push_back(to_string(i));
23            }
24        }
25
26        return ans;
27    }
28};