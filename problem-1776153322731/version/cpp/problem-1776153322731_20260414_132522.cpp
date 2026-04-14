// Last updated: 14/04/2026, 13:25:22
// c
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string prefix = strs[0];
5
6        for(int i = 1; i < strs.size(); i++) {
7            while(strs[i].find(prefix) != 0) {
8                prefix = prefix.substr(0, prefix.length() - 1);
9
10                if(prefix == "") return "";
11            }
12        }
13
14        return prefix;
15    }
16};