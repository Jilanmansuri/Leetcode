// Last updated: 10/03/2026, 10:02:24
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function(nums) {
    nums.sort((a,b)=>a-b)
    let min=0;
    let max=nums.length-1;
    let minavg=Infinity;

    while(min<max){
        let avg=(nums[min]+nums[max])/2;
        minavg=Math.min(minavg,avg);
        min++;
        max--;
    }
    return minavg;
};