// Last updated: 05/06/2026, 12:43:01
1class Solution {
2public:
3    string replaceDigits(string s) {
4        for(int i=1;i<s.size();i+=2){
5            s[i]=s[i-1]+(s[i] - '0');
6                    //      1 -0 =1
7                    //   a +1=b   
8        }
9        return s;
10    }
11};