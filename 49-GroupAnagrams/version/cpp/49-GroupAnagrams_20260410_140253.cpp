// Last updated: 10/04/2026, 14:02:53
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5
6        for(int i = 0; i < strs.size(); i++) {
7            string temp = strs[i];
8            sort(temp.begin(), temp.end()); // sort string
9
10            mp[temp].push_back(strs[i]); // group
11        }
12
13        vector<vector<string>> ans;
14
15        for(auto it : mp) {
16            ans.push_back(it.second);
17        }
18
19        return ans;
20    }
21};