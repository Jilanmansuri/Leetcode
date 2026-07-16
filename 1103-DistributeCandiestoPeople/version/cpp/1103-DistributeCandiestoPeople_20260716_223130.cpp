// Last updated: 16/07/2026, 22:31:30
1class Solution {
2public:
3    vector<int> distributeCandies(int candies, int num_people) {
4
5        vector<int> ans(num_people, 0);
6
7        int give = 1;
8        int index = 0;
9
10        while (candies > 0) {
11
12            if (candies >= give) {
13                ans[index] += give;
14                candies -= give;
15            } 
16            else {
17                ans[index] += candies;
18                candies = 0;
19            }
20
21            give++;
22            index = (index + 1) % num_people;
23        }
24
25        return ans;
26    }
27};