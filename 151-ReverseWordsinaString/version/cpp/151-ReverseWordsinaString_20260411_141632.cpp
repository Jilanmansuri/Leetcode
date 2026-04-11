// Last updated: 11/04/2026, 14:16:32
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        int i = 0;
6        int n = s.size();
7        while (i < n) {
8            while (i < n && s[i] == ' ')
9                i++;
10
11            int start = i;
12
13            while (i < n && s[i] != ' ')
14                i++;
15
16            if (start < i) {
17                words.push_back(s.substr(start, i - start));
18            }
19        }
20        reverse(words.begin(), words.end());
21
22        string result = "";
23        for (int j = 0; j < words.size(); j++) {
24            result += words[j];
25            if (j != words.size() - 1) {
26                result += " ";
27            }
28        }
29        return result;
30    }
31};