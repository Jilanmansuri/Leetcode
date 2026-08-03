// Last updated: 03/08/2026, 10:08:09
class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        return count == 3;
    }
};