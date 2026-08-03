// Last updated: 03/08/2026, 10:06:38
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if (nums.size() < 3) {
            return -1;
        }

        sort(nums.begin(), nums.end());

        return nums[1];
    }
};