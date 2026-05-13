// Last updated: 13/05/2026, 13:09:38
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function(nums) {

    // Step 1: Apply operations
    for (let i = 0; i < nums.length - 1; i++) {
        if (nums[i] === nums[i + 1]) {
            nums[i] = nums[i] * 2;
            nums[i + 1] = 0;
        }
    }

    // Step 2: Shift zeros to end
    let result = [];

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] !== 0) {
            result.push(nums[i]);
        }
    }

    while (result.length < nums.length) {
        result.push(0);
    }

    return result;
};