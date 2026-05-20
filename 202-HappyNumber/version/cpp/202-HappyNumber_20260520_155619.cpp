// Last updated: 20/05/2026, 15:56:19
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4
5        int profit = 0;
6
7        for (int i = 1; i < prices.size(); i++) {
8
9            if (prices[i] > prices[i - 1]) {
10
11                profit += prices[i] - prices[i - 1];
12            }
13        }
14
15        return profit;
16    }
17};