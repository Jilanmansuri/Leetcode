// Last updated: 13/06/2026, 09:19:57
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4
5        vector<string> ans;
6
7        string first = words[0];
8
9        for(char ch : first) {
10
11            bool found = true;
12
13            for(int i = 1; i < words.size(); i++) {
14
15                int pos = -1;
16
17                for(int j = 0; j < words[i].size(); j++) {
18
19                    if(words[i][j] == ch) {
20                        pos = j;
21                        break;
22                    }
23                }
24
25                if(pos == -1) {
26                    found = false;
27                    break;
28                }
29
30                words[i].erase(pos, 1);
31            }
32
33            if(found) {
34                ans.push_back(string(1, ch));
35            }
36        }
37
38        return ans;
39    }
40};