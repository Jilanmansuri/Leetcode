// Last updated: 30/05/2026, 16:40:20
1class Solution {
2public:
3    string build(string s) {
4        string result;
5
6        for (char ch : s) {
7            if (ch != '#') {
8                result.push_back(ch);
9            } else if (!result.empty()) {
10                result.pop_back();
11            }
12        }
13        return result;
14    }
15
16    bool backspaceCompare(string s, string t) {
17
18        string first = build(s);
19        string second = build(t);
20
21        return first == second;
22    }
23};