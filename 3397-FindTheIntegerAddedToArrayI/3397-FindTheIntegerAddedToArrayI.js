// Last updated: 10/03/2026, 10:02:28
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var addedInteger = function(nums1, nums2) {
   let minnums1 = Math.min(...nums1);
   let minnums2 = Math.min(...nums2);
   return minnums2-minnums1; 
};