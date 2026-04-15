// Last updated: 15/04/2026, 10:08:31
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char,char>mp1;
5        unordered_map<char,char>mp2;
6        for(int i=0;i<s.size();i++){
7            char c1=s[i];
8            char c2=t[i];
9            if(mp1.count(c1)){
10                if(mp1[c1] != c2)
11                return false;
12            }
13            else{
14                mp1[c1]=c2;
15            }
16
17            if(mp2.count(c2)){
18                if(mp2[c2] != c1)
19                return false;
20            }
21
22            else{
23                mp2[c2]=c1;
24            }
25        }
26        return true;
27    }
28};