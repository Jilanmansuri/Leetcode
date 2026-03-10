// Last updated: 10/03/2026, 10:03:32
/**
 * @param {number} n
 * @return {number}
 */
var trailingZeroes = function(n) {
    if(n===0){
        return 0;
    }
    let count=0;
       while (n > 0) {
        n = Math.floor(n / 5);
        count += n;
    }
    return count;
};