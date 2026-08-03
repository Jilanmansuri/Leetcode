// Last updated: 03/08/2026, 10:08:11
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int num:nums){
            ans.push_back(num);
        }
        return ans;
    }
};