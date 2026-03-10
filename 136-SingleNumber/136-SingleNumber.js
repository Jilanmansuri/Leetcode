// Last updated: 10/03/2026, 10:03:41
/**
 * @param {number[]} nums
 * @return {number}
 */
// var singleNumber = function(nums) {
//     let result = 0;
//     for (let i = 0; i < nums.length; i++) {
//         result ^= nums[i];
//     }
//     return result;
// };
var singleNumber = function(nums) {
    nums.sort((a, b) => a - b);

    for (let i = 0; i < nums.length; i += 2) {
        if (nums[i] !== nums[i + 1]) {
            return nums[i];
        }
    }

    return nums[nums.length - 1];
};