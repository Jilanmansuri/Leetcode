class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;

        // Pura array ka sum
        for (int x : nums) {
            total += x;
        }

        vector<int> ans;
        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Current element ko right sum se hatao
            total -= nums[i];

            // total ab rightSum hai
            int rightSum = total;

            ans.push_back(abs(leftSum - rightSum));

            // Current element next index ke left me aa jayega
            leftSum += nums[i];
        }

        return ans;
    }
};