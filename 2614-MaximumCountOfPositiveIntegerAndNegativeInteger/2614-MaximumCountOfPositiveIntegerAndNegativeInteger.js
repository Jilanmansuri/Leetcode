// Last updated: 10/03/2026, 10:02:48
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function(nums) {
    let countp =0,countn=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i]==0){
           countp;
            countn;
        }
        else if(nums[i]>0){
            countp++
        }
        else{
            countn++;
        }

    }
    if(countp>countn){
        return countp;
    }
    else{
        return countn;
    }
};
console.log(maximumCount([1,2,3,4,-3,0]))