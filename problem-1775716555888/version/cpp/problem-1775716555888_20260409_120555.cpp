// Last updated: 09/04/2026, 12:05:55
1class Solution {
2public:
3    bool isLetter(char c) {
4        return isalpha(c); 
5    }
6
7    string reverseOnlyLetters(string s) {
8        int left = 0;
9        int right = s.size() - 1;
10
11        while (left < right) {
12            if (!isLetter(s[left])) {
13                left++;
14            } 
15            else if (!isLetter(s[right])) {
16                right--;
17            } 
18            else {
19                swap(s[left], s[right]);
20                left++;
21                right--;
22            }
23        }
24
25        return s;
26    }
27};