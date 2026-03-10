// Last updated: 10/03/2026, 10:03:45
/**
 * @param {number} x
 * @return {number}
 */
// var mySqrt = function(x) {
//     if(x==0){
//         return 0;
//     }
//     for(let i=0;i<=x;i++){
//         if(i*i == x){
//             return i;
//         }
//         else if(i*i>x){
//             return i-1;
//         }
//     }
// };



var mySqrt = function(x) {
    if (x < 2) return x;

    let left = 1;
    let right = Math.floor(x / 2);

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);

        if (mid <= x / mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return right;
};
