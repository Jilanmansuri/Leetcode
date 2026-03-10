// Last updated: 10/03/2026, 10:03:39
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    nums.sort((a, b) => a - b);

    for (let i = 0; i < nums.length; i += 3) {
        if (nums[i] !== nums[i + 1]) {
            return nums[i];
        }
    }

    return nums[nums.length - 1];
};
