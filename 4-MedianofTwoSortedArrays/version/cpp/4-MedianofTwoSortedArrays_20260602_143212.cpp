// Last updated: 02/06/2026, 14:32:12
1class Solution {
2public:
3
4    int searchInsert(vector<int>& nums, int target) {
5
6        int left = 0;
7        int right = nums.size() - 1;
8
9        while(left <= right){
10
11            int mid = left + (right - left) / 2;
12
13           
14            if(nums[mid] == target){
15                return mid;
16            }
17
18        
19            else if(nums[mid] < target){
20                left = mid + 1;
21            }
22
23          
24            else{
25                right = mid - 1;
26            }
27        }
28
29      
30        return left;
31    }
32};