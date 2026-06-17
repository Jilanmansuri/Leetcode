// Last updated: 17/06/2026, 09:20:58
1class Solution {
2public:
3    string processStr(string s) {
4        string result = "";
5
6        for(int i = 0; i < s.size(); i++) {
7
8            if(s[i] == '*' && !result.empty()) {
9                result.pop_back();
10            }
11            else if(s[i] == '#') {
12                result += result;
13            }
14            else if(s[i] == '%' && !result.empty()) {
15                reverse(result.begin(), result.end());
16            }
17            else if(s[i] != '*' && s[i] != '#' && s[i] != '%') {
18                result.push_back(s[i]);
19            }
20        }
21
22        return result;
23    }
24};