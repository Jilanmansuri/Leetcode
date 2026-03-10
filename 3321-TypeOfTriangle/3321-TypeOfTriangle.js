// Last updated: 10/03/2026, 10:02:30
/**
 * @param {number[]} nums
 * @return {string}
 */
var triangleType = function (nums) {
    let a = nums[0];
    let b = nums[1];
    let c = nums[2];

    if (a + b > c && b + c > a && a + c > b) {

        if (a === b && b === c) {
            return "equilateral";
        }

        if (a === b || b === c || a === c) {
            return "isosceles";
        }

        return "scalene";
    }

    return "none";
};