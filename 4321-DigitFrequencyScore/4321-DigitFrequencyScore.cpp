// Last updated: 03/08/2026, 10:05:30
class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        int score=0;

        while(n>0){
            int digit=n%10;

            mp[digit]++;
            n/=10;
        }

        for(auto it:mp){
            score +=it.first * it.second;
        }
        return score;
    }
};