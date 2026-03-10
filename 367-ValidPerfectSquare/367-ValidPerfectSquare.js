// Last updated: 10/03/2026, 10:03:17
/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function(num) {
for(let i=0;i*i<=num;i++){
    if(i*i==num){
        return true;
    }
}
        return false;
};