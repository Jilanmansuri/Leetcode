// Last updated: 10/03/2026, 10:02:52
int smallestEvenMultiple(int n) {
    for(int i=n;i<=2*n;i++){
        if(i%2==0 && i%n==0){
            return i;
        }
    }
    return 0;
};