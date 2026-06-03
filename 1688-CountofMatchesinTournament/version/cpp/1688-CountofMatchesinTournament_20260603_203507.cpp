// Last updated: 03/06/2026, 20:35:07
1class Solution {
2public:
3    int numberOfMatches(int n) {
4        int matches=0;
5        while(n>1){
6            if(n%2==0){
7                matches += n/2;
8                n=n/2;
9            }
10            else{
11                matches+= (n-1)/2;
12                n=(n-1)/2+1;
13            }
14        }
15        return matches;
16    }
17};