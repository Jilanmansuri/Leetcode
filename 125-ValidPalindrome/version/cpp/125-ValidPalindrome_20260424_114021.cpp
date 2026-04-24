// Last updated: 24/04/2026, 11:40:21
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string word = "";
5
6        for (char ch : s) {
7            
8            if ((ch >= 'a' && ch <= 'z') ||
9                (ch >= 'A' && ch <= 'Z') ||
10                (ch >= '0' && ch <= '9')) {
11
12                
13                if (ch >= 'A' && ch <= 'Z') {
14                    ch = ch + 32;
15                }
16
17                word += ch;
18            }
19        }
20
21        string rev = word;
22        reverse(rev.begin(), rev.end());
23
24        return word == rev;
25    }
26};