// Last updated: 14/05/2026, 20:26:58
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans = nums;
5        for(int num:nums){
6            ans.push_back(num);
7        }
8        return ans;
9    }
10};