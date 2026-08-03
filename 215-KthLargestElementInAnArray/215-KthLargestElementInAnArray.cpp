// Last updated: 03/08/2026, 10:12:40
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        return nums[nums.size() - k];
    }
};