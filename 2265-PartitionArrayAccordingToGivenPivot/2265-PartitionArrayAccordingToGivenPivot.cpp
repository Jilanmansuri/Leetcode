// Last updated: 03/08/2026, 10:07:39
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, greater;

        for (int num : nums) {
            if (num < pivot) {
                less.push_back(num);
            }
            else if (num == pivot) {
                equal.push_back(num);
            }
            else {
                greater.push_back(num);
            }
        }

        vector<int> ans;

        for (int num : less) {
            ans.push_back(num);
        }

        for (int num : equal) {
            ans.push_back(num);
        }

        for (int num : greater) {
            ans.push_back(num);
        }

        return ans;
    }
};