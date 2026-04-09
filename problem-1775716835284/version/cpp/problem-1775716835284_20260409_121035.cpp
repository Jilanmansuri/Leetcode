// Last updated: 09/04/2026, 12:10:35
1class Solution {
2public:
3    bool isLetter(char c) {
4        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
5    }
6
7    string reverseOnlyLetters(string s) {
8        int left = 0;
9        int right = s.size() - 1;
10
11        while (left < right) {
12            if (!isLetter(s[left])) {
13                left++;
14            } else if (!isLetter(s[right])) {
15                right--;
16            } else {
17                swap(s[left], s[right]);
18                left++;
19                right--;
20            }
21        }
22        
23        return s;
24    }
25};