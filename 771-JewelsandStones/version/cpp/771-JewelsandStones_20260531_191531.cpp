// Last updated: 31/05/2026, 19:15:31
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4      unordered_set<char> s;
5      for(char c:jewels){
6        s.insert(c);
7      }
8      int count = 0;
9      for(char c:stones){
10        if( s.count(c)){
11            count++;
12        }
13      }
14      return count;
15
16    }
17};