// Last updated: 13/05/2026, 13:10:16
class Solution {
public:
    bool isLetter(char c) {
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
    }

    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isLetter(s[left])) {
                left++;
            } else if (!isLetter(s[right])) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};