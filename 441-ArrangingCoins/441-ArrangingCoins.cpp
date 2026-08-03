// Last updated: 03/08/2026, 10:11:32
class Solution {
public:
    int arrangeCoins(int n) {
        int rows = 0;

        while (n > rows) {
            rows++;
            n -= rows;
        }

        return rows;
    }
};