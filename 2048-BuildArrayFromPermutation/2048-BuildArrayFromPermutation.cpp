// Last updated: 03/08/2026, 10:08:13
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(int i:nums) ans.push_back(nums[i]);
        return ans;
    }
};