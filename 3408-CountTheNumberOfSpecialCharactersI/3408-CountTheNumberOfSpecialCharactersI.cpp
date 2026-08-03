// Last updated: 03/08/2026, 10:06:07
class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_set<char> lower;
        unordered_set<char> upper;

        for (char c : word) {

            if (islower(c)) {
                lower.insert(c);
            } else {
                upper.insert(c);
            }
        }

        int count = 0;

        for (char c : lower) {

            if (upper.count(toupper(c))) {
                count++;
            }
        }

        return count;
    }
};