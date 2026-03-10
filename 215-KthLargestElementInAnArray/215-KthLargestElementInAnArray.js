// Last updated: 10/03/2026, 10:03:30
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function(nums, k) {
    nums.sort((a,b)=>b-a);
    return nums[k-1];
};