class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left = 0;
        int oddCount = 0;
        int evenCount = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] % 2 == 1) {
                oddCount++;
                evenCount = 0;
            }

            while (oddCount > k) {
                if (nums[left] % 2 == 1) {
                    oddCount--;
                }
                left++;
            }

            if (oddCount == k) {
                while (nums[left] % 2 == 0) {
                    evenCount++;
                    left++;
                }

                ans += evenCount + 1;
            }
        }

        return ans;
    }
};