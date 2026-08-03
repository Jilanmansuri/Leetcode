// Last updated: 03/08/2026, 10:11:48
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (char ch : s) {
            ans ^= ch;
        }
        for (char ch : t) {
            ans ^= ch;
        }

        return ans;
    }
};