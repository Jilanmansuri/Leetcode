// Last updated: 10/03/2026, 10:02:58
/**
 * @param {number[]} nums
 * @return {number}
 */
var findGCD = function(nums) {
    let max=Math.max(...nums);
    let min=Math.min(...nums);
    for(let i=max;i>=1;i--){
        if(max%i==0 && min %i==0){
            return i;
        }
    }
};