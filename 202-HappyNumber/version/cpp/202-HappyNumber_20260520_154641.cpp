// Last updated: 20/05/2026, 15:46:41
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4
5        int minPrice = INT_MAX;
6        int maxProfit = 0;
7
8        for (int i = 0; i < prices.size(); i++) {
9
10            minPrice = min(minPrice, prices[i]);
11
12            int profit = prices[i] - minPrice;
13
14            maxProfit = max(maxProfit, profit);
15        }
16
17        return maxProfit;
18    }
19};