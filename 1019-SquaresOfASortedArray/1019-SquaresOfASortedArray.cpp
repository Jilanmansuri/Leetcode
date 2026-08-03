// Last updated: 03/08/2026, 10:10:19
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());

        int i = nums.size() - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[i] = nums[left] * nums[left];
                left++;
            } else {
                ans[i] = nums[right] * nums[right];
                right--;
            }
            i--;
        }

        return ans;
    }
};










// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             nums[i]=nums[i]*nums[i];
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };