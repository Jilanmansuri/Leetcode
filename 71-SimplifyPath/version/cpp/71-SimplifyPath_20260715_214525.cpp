// Last updated: 15/07/2026, 21:45:25
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr = "";
6
7        for (int i = 0; i <= path.size(); i++) {
8
9            if (i == path.size() || path[i] == '/') {
10
11                if (curr == "" || curr == ".") {
12
13                } else if (curr == "..") {
14                    if (!st.empty())
15                        st.pop_back();
16                } else {
17                    st.push_back(curr);
18                }
19
20                curr = "";
21            } else {
22                curr += path[i];
23            }
24        }
25
26        string ans = "";
27
28        for (string dir : st) {
29            ans += "/" + dir;
30        }
31
32        return ans.empty() ? "/" : ans;
33    }
34};