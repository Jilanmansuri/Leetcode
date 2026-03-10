// Last updated: 10/03/2026, 10:03:27
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
     if (n <= 0) return false;

    while (n % 2 === 0) {
        n = n / 2;
    }

    return n === 1;












    // if(n==1){
    //     return true;
    // }
    //     while (n >= 1) {
    //         if (n % 2 == 0) {
    //             let n1 = n / 2;
    //             if (n1 == 1) {
    //                 return true;
    //             }
    //         }
    //         else {
    //             return false;
    //         }

    //         n=n/2;
    //     }
    //     return false;

};
