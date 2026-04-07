// Last updated: 07/04/2026, 11:06:14
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var majorityElement = function (nums) {
6    let n = nums.length;
7    for (let i = 0; i < n; i++) {
8    let count = 0;
9        for (let j = 0; j < n; j++) {
10            if (nums[i] == nums[j]) {
11                count++;
12            }
13        }
14        if (count > n / 2) {
15            return nums[i];
16        }
17    }
18
19
20};