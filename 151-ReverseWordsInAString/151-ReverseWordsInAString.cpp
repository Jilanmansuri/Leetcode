// Last updated: 13/05/2026, 13:10:54
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                temp += s[i];
            } 
            else if (!temp.empty()) {
                words.push_back(temp);
                temp = "";
            }
        }

        if (!temp.empty()) {
            words.push_back(temp);
        }

        reverse(words.begin(), words.end());

        string result = "";
        for (int i = 0; i < words.size(); i++) {
            if (i == 0) result += words[i];
            else result += " " + words[i];
        }

        return result;
    }
};