// Last updated: 13/05/2026, 13:09:24
class Solution {
public:
    int maxProduct(int n) {
        int max = 0, secondmax = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit > max) {
                secondmax = max;
                max = digit;
            } else if (digit > secondmax) {
                secondmax = digit;
            }
            n = n / 10;
        }
        return max * secondmax;
    }
};