// Last updated: 03/06/2026, 20:20:57
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        int count=0;
5        for(int num:arr){
6            if(num %2 != 0){
7                count++;
8
9                if(count ==3){
10                    return true;
11                }
12            }
13            else{
14                count =0;
15            }
16        }
17         return false;
18    }
19};