// Last updated: 17/06/2026, 10:01:14
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int balance=0;
5        int count=0;
6        for(char ch:s){
7            if(balance==0){
8                count++;
9            }
10            if(ch=='R'){
11                balance--;
12            }
13            if(ch=='L'){
14                balance++;
15            }
16
17        }
18        return count;
19    }
20};