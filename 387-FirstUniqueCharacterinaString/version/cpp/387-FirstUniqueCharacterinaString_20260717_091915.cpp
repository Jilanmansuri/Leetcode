// Last updated: 17/07/2026, 09:19:15
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char,int>mp;
5        for(char c:s){
6            mp[c]++;
7        }
8        for(int i=0;i<s.size();i++){
9            if(mp[s[i]]==1){
10                return i;
11            }
12        }
13        return -1;
14    }
15};