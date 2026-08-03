// Last updated: 03/08/2026, 10:12:43
class Solution {
public:
       int getsum(int n){
          int sum=0;
          while(n>0){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
          }
          return sum;
       }


    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=0 && seen.find(n)==seen.end() ){
            seen.insert(n);
            n=getsum(n);
        }
        return n==1;
        
    }
};