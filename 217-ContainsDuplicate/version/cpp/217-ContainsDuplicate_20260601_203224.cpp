// Last updated: 01/06/2026, 20:32:24
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int buy=prices[0];
5        int profit =0;
6
7        for(int i=1;i<prices.size();i++){
8            if(prices[i]<buy){
9                buy=prices[i];
10            }
11            else if(prices[i]-buy>profit){
12                profit=prices[i] - buy;
13            }
14        }
15        return profit;
16    }
17};