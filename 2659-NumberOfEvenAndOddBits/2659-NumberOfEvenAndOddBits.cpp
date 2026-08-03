// Last updated: 03/08/2026, 10:07:04
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0;
        int pos = 0;

        while (n > 0) {
            if (n & 1) {
                if (pos % 2 == 0)
                    even++;
                else
                    odd++;
            }

            n >>= 1;
            pos++;
        }

        return {even, odd};
    }
};