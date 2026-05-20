// Last updated: 20/05/2026, 15:51:00
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4
5        int buy = prices[0];
6        int profit = 0;
7
8        for (int i = 1; i < prices.size(); i++) {
9
10            if (prices[i] < buy) {
11                buy = prices[i];
12            }
13
14            else if (prices[i] - buy > profit) {
15                profit = prices[i] - buy;
16            }
17        }
18
19        return profit;
20    }
21};