// Last updated: 13/05/2026, 13:10:32
class Solution {
public:
    bool isPowerOfFour(int n) {
          if (n <= 0)
            return false;

        while (n % 4 ==  0) {
            n = n / 4;
        }

        return n ==  1;
    }
};