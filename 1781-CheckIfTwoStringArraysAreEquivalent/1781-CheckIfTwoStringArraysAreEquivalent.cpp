// Last updated: 03/08/2026, 10:09:04
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        string s1 = "";
        string s2 = "";

        for (string s : word1) {
            s1 += s;
        }

        for (string s : word2) {
            s2 += s;
        }

        return s1 == s2;
    }
};