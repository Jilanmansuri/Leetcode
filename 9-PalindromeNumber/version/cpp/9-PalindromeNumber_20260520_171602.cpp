// Last updated: 20/05/2026, 17:16:02
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x<0){
5            return false;
6        }
7
8        int original =x;
9
10        long long rev=0;
11
12        while(x>0){
13            int digit= x%10;
14            rev=rev*10 +digit;
15
16            x=x/10;
17        }
18        return original == rev;
19    }
20};