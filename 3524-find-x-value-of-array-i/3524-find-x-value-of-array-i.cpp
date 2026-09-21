class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> next(k, 0);

            // New subarray: [num]
            next[num % k]++;

            // Previous subarrays + num
            for (int r = 0; r < k; r++) {
                int newR = (r * (num % k)) % k;
                next[newR] += dp[r];
            }

            dp = next;

            // Count all subarrays ending at current index
            for (int r = 0; r < k; r++) {
                ans[r] += dp[r];
            }
        }

        return ans;
    }
};