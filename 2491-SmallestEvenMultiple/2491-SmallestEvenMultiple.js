// Last updated: 10/03/2026, 10:02:54
/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
    for(let i=n;i<=2*n;i++){
        if(i%2==0 && i%n==0){
            return i;
        }
    }
};