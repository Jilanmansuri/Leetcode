// Last updated: 03/08/2026, 10:08:37
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int alphabet=coordinates[0];
        int num=coordinates[1];
        return (alphabet+num)%2!=0;
    }
};
