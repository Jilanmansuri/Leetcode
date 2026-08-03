// Last updated: 03/08/2026, 10:07:19
class Solution {
public:
    int smallestEvenMultiple(int n) {
    for(int i=n;i<=2*n;i++){
        if(i%2==0 && i%n==0){
            return i;
        }
    }
    return 0;
};
};