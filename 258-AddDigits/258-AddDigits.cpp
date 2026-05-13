// Last updated: 13/05/2026, 13:10:42
class Solution {
public:
    int addDigits(int num) {
        int digit= 1+ (num-1)%9;
        return digit;
    }
};