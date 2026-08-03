// Last updated: 03/08/2026, 10:05:33
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums.front(), nums.back());
    }
};