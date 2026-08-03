// Last updated: 03/08/2026, 10:10:13
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count=0;

        for (char ch:s) {
            if (ch == '(') {

                if (count > 0) {
                    ans += ch;
                }
                count++;
            } else {
                count--;
                if (count > 0) {
                    ans += ch;
                }
            }
        }
        return ans;
    }
};