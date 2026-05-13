// Last updated: 13/05/2026, 13:10:07
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int num : nums) {
            int count = 0;
            while (num > 0) {
                int digit = num % 10;
                count++;
                num = num / 10;
            }
            if (count % 2 == 0) {
                even++;
            }
        }
        return even;
    }
};