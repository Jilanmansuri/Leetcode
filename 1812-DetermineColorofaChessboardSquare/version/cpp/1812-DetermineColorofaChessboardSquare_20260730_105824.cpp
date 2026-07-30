// Last updated: 30/07/2026, 10:58:24
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        int alphabet=coordinates[0];
5        int num=coordinates[1];
6        return (alphabet+num)%2!=0;
7    }
8};
9