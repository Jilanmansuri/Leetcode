// Last updated: 19/05/2026, 20:29:19
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4    for(int i=n;i<=2*n;i++){
5        if(i%2==0 && i%n==0){
6            return i;
7        }
8    }
9    return 0;
10};
11};