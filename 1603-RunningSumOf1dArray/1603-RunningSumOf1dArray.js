// Last updated: 10/03/2026, 10:03:05
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let arr=[];
    let sum=0;
    for(let i = 0;i<nums.length;i++){
        sum=sum+nums[i]
        arr. push(sum)
    }return arr
};
   