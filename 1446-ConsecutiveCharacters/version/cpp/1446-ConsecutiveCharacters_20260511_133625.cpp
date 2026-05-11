// Last updated: 11/05/2026, 13:36:25
1class Solution {
2public:
3    int maxPower(string s) {
4        if (s.size() == 1) {
5            return 1;
6        }
7        int count=1;
8        int maxcount=0;
9
10        for (int i = 0; i < s.size() - 1; i++) {
11            if(s[i]==s[i+1]){
12                count++;
13            }
14            else{
15                count=1;
16            }
17            if(count>maxcount){
18                maxcount=count;
19            }
20        }
21
22        return maxcount;
23    }
24};