// Last updated: 03/08/2026, 10:06:26
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        string check = "";

        for (string word : words) {

            check.push_back(word[0]);

        }

        return check == s;
    }
};