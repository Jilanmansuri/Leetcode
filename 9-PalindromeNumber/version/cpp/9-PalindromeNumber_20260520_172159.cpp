// Last updated: 20/05/2026, 17:21:59
1class Solution {
2public:
3    bool isHappy(int n) {
4        while( n!=1 && n!=4){
5            int sum =0;
6
7            while(n>0){
8              int digit =n%10;
9              sum += digit *digit;
10
11              n= n/10;
12
13            }
14
15            n=sum;
16        }
17        return n==1;
18    }
19};