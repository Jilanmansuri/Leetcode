// Last updated: 28/05/2026, 20:48:48
1class Solution {
2public:
3    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
4
5        int index = 0;
6
7        if (ruleKey == "type") {
8            index = 0;
9        }
10
11        else if (ruleKey == "color") {
12            index = 1;
13        }
14
15        else {
16            index = 2;
17        }
18
19        int count = 0;
20
21        for (int i = 0; i < items.size(); i++) {
22
23            if (items[i][index] == ruleValue) {
24                count++;
25            }
26        }
27
28        return count;
29    }
30};