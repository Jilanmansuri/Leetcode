// Last updated: 29/07/2026, 13:39:23
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int closest = nums[0] + nums[1] + nums[2];
6
7        for (int i = 0; i < nums.size() - 2; i++) {
8            int left = i + 1;
9            int right = nums.size() - 1;
10
11            while (left < right) {
12                int sum = nums[i] + nums[left] + nums[right];
13                if (abs(target - sum) < abs(target - closest)) {
14                    closest = sum;
15                }
16                if(sum<target){
17                    left++;
18                }
19                else if(sum>target){
20                    right--;
21                }
22                else{
23                    return sum;
24                }
25            }
26        }
27        return closest;
28    }
29};
30