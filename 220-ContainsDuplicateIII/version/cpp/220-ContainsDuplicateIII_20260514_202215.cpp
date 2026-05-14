// Last updated: 14/05/2026, 20:22:15
1class Solution {
2public:
3    string toLowerCase(string str) {
4        for(char &ch:str){   
5            if(ch >='A'&& ch<='Z'){
6                ch=ch+32;
7            }
8        }
9        return str;
10    }
11};