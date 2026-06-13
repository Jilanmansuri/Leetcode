// Last updated: 13/06/2026, 15:36:15
1class Solution {
2public:
3    vector<vector<int>> findMatrix(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6        vector<vector<int>> ans;
7
8        for(int num : nums) {
9
10            int freq = mp[num];
11
12            if(ans.size() <= freq) {
13                ans.push_back({});
14            }
15
16            ans[freq].push_back(num);
17            mp[num]++;
18        }
19
20        return ans;
21    }
22};