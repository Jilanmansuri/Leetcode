// Last updated: 13/06/2026, 14:54:01
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4
5        int pref = word.find(ch);
6        if(!pref){
7            return word;
8        }
9        reverse(word.begin(), word.begin() + pref + 1);
10        return word;
11    }
12};