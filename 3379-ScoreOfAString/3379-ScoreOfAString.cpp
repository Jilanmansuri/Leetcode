// Last updated: 03/08/2026, 10:06:09
class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1;i<s.size();i++){
            score += abs(s[i]- s[i-1]);
        }
        return score;
    }
};