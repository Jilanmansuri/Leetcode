// Last updated: 14/04/2026, 13:08:27
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans = "";
5
6        for(int i = 0; i < strs[0].length(); i++) {
7            char ch = strs[0][i];
8
9            for(int j = 1; j < strs.size(); j++) {
10                if(i >= strs[j].length() || strs[j][i] != ch) {
11                    return ans;
12                }
13            }
14
15            ans += ch;
16        }
17
18        return ans;
19    }
20};