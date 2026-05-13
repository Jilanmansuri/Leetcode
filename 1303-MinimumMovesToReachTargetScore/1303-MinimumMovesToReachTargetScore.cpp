// Last updated: 13/05/2026, 13:10:11
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        while (target > 1 && maxDoubles>0) {
            if (target % 2 == 0) {
                target /= 2;
               
                maxDoubles--;
            } else {
                target -= 1;
             
            }
               count++;
        }
        count += (target-1);
        return count;
    }
};