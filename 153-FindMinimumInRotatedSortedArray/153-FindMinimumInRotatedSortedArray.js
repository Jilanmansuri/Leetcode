// Last updated: 10/03/2026, 10:03:38
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(arr) {
    let min=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
};