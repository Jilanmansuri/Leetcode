// Last updated: 13/03/2026, 21:23:22
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var applyOperations = function(nums) {
6
7    // Step 1: Apply operations
8    for (let i = 0; i < nums.length - 1; i++) {
9        if (nums[i] === nums[i + 1]) {
10            nums[i] = nums[i] * 2;
11            nums[i + 1] = 0;
12        }
13    }
14
15    // Step 2: Shift zeros to end
16    let result = [];
17
18    for (let i = 0; i < nums.length; i++) {
19        if (nums[i] !== 0) {
20            result.push(nums[i]);
21        }
22    }
23
24    while (result.length < nums.length) {
25        result.push(0);
26    }
27
28    return result;
29};