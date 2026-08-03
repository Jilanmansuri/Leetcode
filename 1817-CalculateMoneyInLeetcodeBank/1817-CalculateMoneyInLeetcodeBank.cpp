// Last updated: 03/08/2026, 10:08:50
class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int week = 0;

        for (int i = 1; i <= n; i++) {
            total += week + (i - 1) % 7 + 1;

            if (i % 7 == 0) {
                week++;
            }
        }

        return total;
    }
};