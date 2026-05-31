// Last updated: 31/05/2026, 19:34:58
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        unordered_map<char,int> mp;
5        for(char c:s){
6            mp[c]++;
7        }
8
9        for(char c:t){
10            mp[c]--;
11        }
12        
13        for(auto it:mp){
14            if(it.second!=0){
15                return false;
16            }
17        }
18        return true;
19    }
20};