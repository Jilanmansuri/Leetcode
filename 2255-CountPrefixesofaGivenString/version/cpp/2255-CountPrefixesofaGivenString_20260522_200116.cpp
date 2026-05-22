// Last updated: 22/05/2026, 20:01:16
1class Solution {
2public:
3    bool isAcronym(vector<string>& words, string s) {
4
5        string check = "";
6
7        for (string word : words) {
8
9            check.push_back(word[0]);
10
11        }
12
13        return check == s;
14    }
15};