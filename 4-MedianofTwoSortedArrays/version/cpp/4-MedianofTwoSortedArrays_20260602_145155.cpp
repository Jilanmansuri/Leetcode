// Last updated: 02/06/2026, 14:51:55
1class Solution {
2public:
3
4    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
5
6       
7        int maxi = *max_element(candies.begin(), candies.end());
8
9        vector<bool> ans;
10
11       
12        for(int candy : candies){
13
14          
15            if(candy + extraCandies >= maxi){
16                ans.push_back(true);
17            }
18            else{
19                ans.push_back(false);
20            }
21        }
22
23        return ans;
24    }
25};