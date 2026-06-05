// Last updated: 05/06/2026, 13:10:39
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int score=0;
5        for(int i=1;i<s.size();i++){
6            score += abs(s[i]- s[i-1]);
7        }
8        return score;
9    }
10};