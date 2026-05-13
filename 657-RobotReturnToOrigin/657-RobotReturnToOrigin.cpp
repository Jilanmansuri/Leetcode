// Last updated: 13/05/2026, 13:10:19
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for (int step : moves) {
            if (step == 'L') {
                x--;
            }
            else if (step == 'R') {
                x++;
            }

            else if (step == 'U') {
                y++;
            }

            else {
                y--;
            }
        }
        return (x==0 && y==0);
    }
};