// Last updated: 13/05/2026, 13:09:34
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> res;

        for(int num : nums) {

            int start = res.size();

            while(num > 0) {

                int digit = num % 10;

                res.insert(res.begin() + start, digit);

                num /= 10;
            }
        }

        return res;
    }
};