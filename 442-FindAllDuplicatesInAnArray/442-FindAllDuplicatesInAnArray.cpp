// Last updated: 03/08/2026, 10:11:31
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                ans.push_back(index + 1);
            }

            nums[index] = -nums[index];
        }

        return ans;
    }
};