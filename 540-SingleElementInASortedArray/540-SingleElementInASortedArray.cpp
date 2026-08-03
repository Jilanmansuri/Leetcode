// Last updated: 03/08/2026, 10:11:02
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto it : mp) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};