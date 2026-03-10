// Last updated: 10/03/2026, 10:03:57
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    for(let i=0;i<nums.length;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
};