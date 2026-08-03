// Last updated: 03/08/2026, 10:13:37
class Solution {
public:
    int climbStairs(int n) {
       if(n<=2){
        return n;
       }
        int first =1;
        int second = 2;
        for(int i=3;i<=n;i++){
            int current = first+second;
            first = second;
            second= current;
        }
        return second;

    }
};