// Last updated: 09/05/2026, 12:10:47
1class Solution {
2public:
3    string toLowerCase(string s) {
4        string res="";
5        for(char ch:s){
6            res += tolower(ch);
7        }
8        return res;
9    }
10};