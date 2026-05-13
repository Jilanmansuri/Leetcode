// Last updated: 13/05/2026, 13:10:36
class Solution {
public:
    bool isPowerOfThree(int n) {
         if (n <= 0)
            return false;

        while (n % 3 ==  0) {
            n = n / 3;
        }

        return n ==  1;
    }
    
};