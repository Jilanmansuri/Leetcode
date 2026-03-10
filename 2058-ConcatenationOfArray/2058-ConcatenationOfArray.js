// Last updated: 10/03/2026, 10:03:01
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    let ans = [];
    
    for (let a = 0; a < nums.length; a++) {
        ans.push(nums[a]);
    }
    
    for (let a = 0; a < nums.length; a++) {
        ans.push(nums[a]);
    }

    
    return ans;
};
