// Last updated: 28/05/2026, 20:17:41
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4
5        int left = 0;
6        int right = numbers.size() - 1;
7
8        while (left < right) {
9
10            int sum = numbers[left] + numbers[right];
11
12            if (sum == target) {
13                return {left + 1, right + 1};
14            }
15
16            else if (sum < target) {
17                left++;
18            }
19
20            else {
21                right--;
22            }
23        }
24
25        return {};
26    }
27};