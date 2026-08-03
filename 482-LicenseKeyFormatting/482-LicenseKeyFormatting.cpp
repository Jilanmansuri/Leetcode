// Last updated: 03/08/2026, 10:11:10
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp = "";

        for (char c : s) {
            if (c != '-') {
                temp += toupper(c);
            }
        }

        string ans = "";
        int count = 0;

        for (int i = temp.size() - 1; i >= 0; i--) {

            ans += temp[i];
            count++;

            if (count == k && i != 0) {
                ans += '-';
                count = 0;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};