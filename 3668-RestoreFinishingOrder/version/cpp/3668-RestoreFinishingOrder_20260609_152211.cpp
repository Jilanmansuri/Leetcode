// Last updated: 09/06/2026, 15:22:11
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4
5        vector<int> ans;
6
7        for(int i = 0; i < order.size(); i++) {
8
9            for(int j = 0; j < friends.size(); j++) {
10
11                if(order[i] == friends[j]) {
12                    ans.push_back(order[i]);
13                    break;
14                }
15            }
16        }
17
18        return ans;
19    }
20};