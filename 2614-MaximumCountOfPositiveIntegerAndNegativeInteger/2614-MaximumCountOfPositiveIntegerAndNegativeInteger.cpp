// Last updated: 03/08/2026, 10:07:09
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] > 0) {
                pos++;
            }
            else if (nums[i] < 0) {
                neg++;
            }
        }

        return max(pos, neg);
    }
};