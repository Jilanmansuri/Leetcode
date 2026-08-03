// Last updated: 03/08/2026, 10:13:39
class Solution {
public:
    int mySqrt(int x) {

        int i = 0;

        while ((long long)i * i <= x) {
            i++;
        }

        return i - 1;
    }
};