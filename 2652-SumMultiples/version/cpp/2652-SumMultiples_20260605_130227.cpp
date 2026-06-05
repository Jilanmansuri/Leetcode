// Last updated: 05/06/2026, 13:02:27
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i=0;
5        int j=0;
6        while(i<s.size() && j<t.size()){
7            if(s[i]==t[j]){
8                i++;
9            }
10            j++;
11        }
12        return i== s.size();
13    }
14};