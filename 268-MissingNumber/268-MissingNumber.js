// Last updated: 10/03/2026, 10:03:23
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let realsum=0;
    let n=nums.length;
      let exsum = n * (n + 1) / 2;

    for(let i=0;i<nums.length;i++){
       realsum+=nums[i];
    }
    return exsum-realsum;
};
