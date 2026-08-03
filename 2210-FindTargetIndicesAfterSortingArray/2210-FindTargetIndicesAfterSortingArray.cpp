// Last updated: 03/08/2026, 10:07:51
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};





















// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         vector<int> ans;
//         int smaller = 0;
//         int equal = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] < target) {
//                 smaller++;
//             } else if (nums[i] == target) {
//                 equal++;
//             }
//         }
//         for (int i = smaller; i <smaller + equal; i++) {
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };