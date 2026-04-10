// Last updated: 10/04/2026, 14:48:16
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5
6        for (string word : strs) {
7            string temp = word;
8            sort(temp.begin(), temp.end());
9
10            mp[temp].push_back(word);
11        }
12
13        vector<vector<string>>result; 
14        for (auto it : mp) {
15            result.push_back(it.second);
16        }
17        return result;
18    }
19};