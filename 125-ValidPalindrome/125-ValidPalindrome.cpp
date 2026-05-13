// Last updated: 13/05/2026, 13:10:58
class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";

        for (char ch : s) {
            
            if ((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z') ||
                (ch >= '0' && ch <= '9')) {

                
                if (ch >= 'A' && ch <= 'Z') {
                    ch = ch + 32;
                }

                word += ch;
            }
        }

        string rev = word;
        reverse(rev.begin(), rev.end());

        return word == rev;
    }
};