// Last updated: 11/04/2026, 14:40:27
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        int n = s.size();
6
7        for (int i = 0; i < n; ) {
8
9            if (s[i] == ' ') {
10                i++;
11            } else {
12                int start = i;
13
14              
15                while (i < n && s[i] != ' ') {
16                    i++;
17                }
18
19                words.push_back(s.substr(start, i - start));
20            }
21        }
22
23        reverse(words.begin(), words.end());
24
25        string result = "";
26        for (int j = 0; j < words.size(); j++) {
27            if (j == 0) result += words[j];
28            else result += " " + words[j];
29        }
30
31        return result;
32    }
33};