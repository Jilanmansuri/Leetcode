// Last updated: 19/05/2026, 20:23:56
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int product =1;int sum=0;
5        while(n>0){
6            int digit=n%10;
7           sum+=digit;
8           product *= digit;
9            n/=10;
10        }
11        return product-sum;
12    }
13};