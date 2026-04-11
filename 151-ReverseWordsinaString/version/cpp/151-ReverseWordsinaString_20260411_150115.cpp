// Last updated: 11/04/2026, 15:01:15
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        string temp = "";
6        int n = s.size();
7
8        for (int i = 0; i < n; ++i) {
9            if (s[i] != ' ') {
10                temp += s[i];
11            } 
12            else if (!temp.empty()) {
13                words.push_back(temp);
14                temp = "";
15            }
16        }
17
18        if (!temp.empty()) {
19            words.push_back(temp);
20        }
21
22        reverse(words.begin(), words.end());
23
24        string result = "";
25        for (int i = 0; i < words.size(); i++) {
26            if (i == 0) result += words[i];
27            else result += " " + words[i];
28        }
29
30        return result;
31    }
32};