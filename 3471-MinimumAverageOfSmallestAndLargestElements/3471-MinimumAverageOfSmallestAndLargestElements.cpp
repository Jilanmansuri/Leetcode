// Last updated: 03/08/2026, 10:05:55
class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        double ans = INT_MAX;

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            double avg = (nums[left] + nums[right]) / 2.0;

            ans = min(ans, avg);

            left++;
            right--;
        }

        return ans;
    }
};