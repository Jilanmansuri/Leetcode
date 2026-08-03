// Last updated: 03/08/2026, 10:11:16
class Solution {
public:
    int findComplement(int num) {
        int mask = 1;

        while (mask < num) {
            mask = (mask << 1) | 1;
        }

        return mask ^ num;
    }
};