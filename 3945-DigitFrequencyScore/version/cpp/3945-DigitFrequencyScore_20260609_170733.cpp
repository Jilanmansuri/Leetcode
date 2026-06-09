// Last updated: 09/06/2026, 17:07:33
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int freq[10]={};
5        while(n>0){
6            int digit=n%10;
7            freq[digit]++;
8            n/=10;
9        }
10        int score=0;
11
12        for(int i=0;i<10;i++){
13            score += i*freq[i];
14        }
15    return score;
16    }
17};