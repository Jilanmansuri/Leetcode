// Last updated: 11/05/2026, 13:38:20
1class Solution {
2public:
3    int maxPower(string s) {
4        
5        int count=1;
6        int maxcount=1;
7
8        for (int i = 0; i < s.size() - 1; i++) {
9            if(s[i]==s[i+1]){
10                count++;
11            }
12            else{
13                count=1;
14            }
15            if(count>maxcount){
16                maxcount=count;
17            }
18        }
19
20        return maxcount;
21    }
22};