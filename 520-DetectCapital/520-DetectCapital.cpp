// Last updated: 03/08/2026, 10:11:05
class Solution {
public:
    bool detectCapitalUse(string word) {

        int upper = 0;

        for (char ch : word) {

            if (ch >= 'A' && ch <= 'Z') {
                upper++;
            }
        }

        if (upper == word.size() || upper == 0) {
            return true;
        }

        if (upper == 1 && word[0] >= 'A' && word[0] <= 'Z') {
            return true;
        }

        return false;
    }
};