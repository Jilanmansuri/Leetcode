// Last updated: 13/06/2026, 21:50:26
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int,int>mp;
5        int score=0;
6
7        while(n>0){
8            int digit=n%10;
9
10            mp[digit]++;
11            n/=10;
12        }
13
14        for(auto it:mp){
15            score +=it.first * it.second;
16        }
17        return score;
18    }
19};