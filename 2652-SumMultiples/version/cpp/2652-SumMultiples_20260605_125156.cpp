// Last updated: 05/06/2026, 12:51:56
1class Solution {
2public:
3    int minimumMoves(string s) {
4        int moves=0;
5        for(int i=0;i<s.size();i++){
6            if(s[i]=='X'){
7                moves++;
8            i+=2;
9            }
10        }
11
12        return moves;
13    }
14};