// Last updated: 07/06/2026, 11:00:55
1class Solution {
2public:
3       int getsum(int n){
4          int sum=0;
5          while(n>0){
6            int digit=n%10;
7            sum+=digit*digit;
8            n/=10;
9          }
10          return sum;
11       }
12
13
14    bool isHappy(int n) {
15        unordered_set<int> seen;
16        while(n!=0 && seen.find(n)==seen.end() ){
17            seen.insert(n);
18            n=getsum(n);
19        }
20        return n==1;
21        
22    }
23};