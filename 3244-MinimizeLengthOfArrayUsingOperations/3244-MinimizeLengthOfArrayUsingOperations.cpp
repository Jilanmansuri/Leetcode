// Last updated: 03/08/2026, 10:06:13
class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {

        int mn = *min_element(nums.begin(), nums.end());

        int count = 0;

        for (int x : nums) {

            
            if (x % mn != 0) {
                return 1;
            }

            if (x == mn) {
                count++;
            }
        }

       
        return (count + 1) / 2;
    }
};