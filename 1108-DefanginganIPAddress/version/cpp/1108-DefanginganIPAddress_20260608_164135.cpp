// Last updated: 08/06/2026, 16:41:35
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string ans;
5
6        for(char ch : address){
7            if(ch == '.'){
8                ans += "[.]";
9            }
10            else{
11                ans += ch;
12            }
13        }
14
15        return ans;
16    }
17};