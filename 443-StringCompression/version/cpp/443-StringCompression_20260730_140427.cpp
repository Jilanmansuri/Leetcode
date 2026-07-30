// Last updated: 30/07/2026, 14:04:27
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4
5        int i = 0;
6        int index = 0;
7
8        while (i < chars.size()) {
9
10            char ch = chars[i];
11            int count = 0;
12
13            while (i < chars.size() && chars[i] == ch) {
14                count++;
15                i++;
16            }
17            chars[index++] = ch;
18
19            if (count > 1) {
20                string s = to_string(count);
21
22                for (char c : s) {
23                    chars[index++] = c;
24                }
25            }
26        }
27
28        return index;
29    }
30};