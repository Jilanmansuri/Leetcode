// Last updated: 13/05/2026, 13:19:55
1class Solution {
2public:
3    string replaceDigits(string s) {
4        for(int i=1;i<s.size();i+=2){
5            s[i]=s[i-1]+ (s[i]-'0'); 
6        }
7        return s;
8    }
9};