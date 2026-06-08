// Last updated: 08/06/2026, 11:28:45
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5        int n = nums.size();
6
7        for (int i = 0; i < n; i++) {
8            int start = nums[i];
9            while(i+1<n && nums[i+1]==nums[i]+1){
10                i++;
11            }
12            int end=nums[i];
13
14            if(start == end){
15                ans.push_back(to_string(end));
16            }
17            else{
18                ans.push_back(to_string(start)+ "->"+ to_string(end));
19            }
20
21        }
22
23        return ans;
24    }
25};