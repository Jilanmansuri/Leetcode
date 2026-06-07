// Last updated: 07/06/2026, 11:22:45
1class Solution {
2public:
3
4    string build(string str){
5        string result;
6        for(char ch:str){
7            if(ch != '#'){
8                result.push_back(ch);
9            }
10            else if(!result.empty()){
11                result.pop_back();
12            }
13        }
14        return result;
15    }
16
17
18    bool backspaceCompare(string s, string t) {
19        return build(s)==build(t);
20    }
21};