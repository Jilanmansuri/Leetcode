// Last updated: 03/08/2026, 10:09:08
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();

        if (n <= 4) return 0;

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        ans = min(ans, nums[n - 4] - nums[0]); // remove 3 largest
        ans = min(ans, nums[n - 3] - nums[1]); // remove 2 largest, 1 smallest
        ans = min(ans, nums[n - 2] - nums[2]); // remove 1 largest, 2 smallest
        ans = min(ans, nums[n - 1] - nums[3]); // remove 3 smallest

        return ans;
    }
};