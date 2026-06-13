// Last updated: 13/06/2026, 10:07:47
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4
5        vector<string> ans;
6
7        string first = words[0];
8
9        for (char ch : first) {
10           int ind;
11            for (int i = 1; i < words.size(); i++) {
12                ind = words[i].find(ch);
13                if(ind == -1){
14                    break;
15                }
16                else{
17                    words[i].erase(ind,1);
18                }
19            }
20
21            if(ind != -1){
22                ans.push_back(string(1,ch));
23            }
24        }
25
26        return ans;
27    }
28};