// Last updated: 03/08/2026, 10:08:00
class Solution {
public:
    string reversePrefix(string word, char ch) {

        int pref = word.find(ch);
        if(!pref){
            return word;
        }
        reverse(word.begin(), word.begin() + pref + 1);
        return word;
    }
};