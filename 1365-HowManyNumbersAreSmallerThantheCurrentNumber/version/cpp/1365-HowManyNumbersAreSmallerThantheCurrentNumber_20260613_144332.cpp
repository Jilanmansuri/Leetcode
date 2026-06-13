// Last updated: 13/06/2026, 14:43:32
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int>ans;
5        for (int i = 0; i < nums.size(); i++) {
6        int count=0;
7            for (int j = 0; j < nums.size(); j++) {
8                if (nums[j]<nums[i]){
9                    count++;
10                }
11            }
12            ans.push_back(count);
13        }
14        return ans;
15    }
16};