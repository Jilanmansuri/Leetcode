// Last updated: 11/05/2026, 13:45:04
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int count=0;
5        for(int i=0;i<jewels.size();i++){
6            if(jewels[i]==jewels[i+1]){
7                continue;
8            }
9            for(int j=0;j<stones.size();j++){
10                 if(jewels[i]==stones[j]){
11                    count++;
12                 }
13            }
14        }
15        return count;
16    }
17};