// Last updated: 03/08/2026, 10:05:58
class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i = 0;
        int n = word.size();

        while (i < n) {
            char ch = word[i];
            int cnt = 0;

            while (i < n && word[i] == ch && cnt < 9) {
                cnt++;
                i++;
            }

            ans += to_string(cnt);
            ans += ch;
        }

        return ans;
    }
};