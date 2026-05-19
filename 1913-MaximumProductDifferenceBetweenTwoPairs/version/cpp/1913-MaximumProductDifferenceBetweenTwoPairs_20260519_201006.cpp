// Last updated: 19/05/2026, 20:10:06
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4
5        int max1 = 0, max2 = 0;
6        int min1 = INT_MAX, min2 = INT_MAX;
7
8        for(int num : nums){
9
10            // largest
11            if(num > max1){
12                max2 = max1;
13                max1 = num;
14            }
15            else if(num > max2){
16                max2 = num;
17            }
18
19            // smallest
20            if(num < min1){
21                min2 = min1;
22                min1 = num;
23            }
24            else if(num < min2){
25                min2 = num;
26            }
27        }
28
29        return (max1 * max2) - (min1 * min2);
30    }
31};