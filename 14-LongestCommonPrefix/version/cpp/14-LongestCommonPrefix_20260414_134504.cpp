// Last updated: 14/04/2026, 13:45:04
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
17
18
19
20
21
22// class Solution {
23// public:
24//     string longestCommonPrefix(vector<string>& strs) {
25//         string ans = "";
26
27//         for(int i = 0; i < strs[0].length(); i++) {
28//             char ch = strs[0][i];
29
30//             for(int j = 1; j < strs.size(); j++) {
31//                 if(i >= strs[j].length() || strs[j][i] != ch) {
32//                     return ans;
33//                 }
34//             }
35
36//             ans += ch;
37//         }
38
39//         return ans;
40//     }
41// };