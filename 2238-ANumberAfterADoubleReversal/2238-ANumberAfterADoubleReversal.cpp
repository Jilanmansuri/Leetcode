// Last updated: 03/08/2026, 10:07:43
class Solution {
public:
    bool isSameAfterReversals(int num) {

        if(num == 0){
            return true;
        }

        return num % 10 != 0;
    }
};