// Last updated: 05/06/2026, 12:11:55
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int sum=0;
5        for(int i=1;i<=n;i++){
6            if(i%3==0 || i%5==0 || i%7==0){
7                sum+=i;
8            }
9        }
10
11        return sum;
12    }
13};