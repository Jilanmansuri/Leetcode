// Last updated: 13/05/2026, 13:10:22
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count = 0;
            } else {
                count++;
            }
            if (count > maxcount) {
                maxcount = count;
            }
        }
        return maxcount;
    }
};