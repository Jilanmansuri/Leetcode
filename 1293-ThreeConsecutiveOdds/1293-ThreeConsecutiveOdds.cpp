// Last updated: 13/05/2026, 13:10:12
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (int i : arr) {
            if (i % 2 == 1) {
                count++;
                if (count == 3) {
                    return true;
                }
            } else {
                count = 0;
            }
        }
        return count == 3;
    }
};