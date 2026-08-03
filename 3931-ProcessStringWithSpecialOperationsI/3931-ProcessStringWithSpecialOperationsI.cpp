// Last updated: 03/08/2026, 10:05:40
class Solution {
public:
    string processStr(string s) {
        string result = "";

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '*' && !result.empty()) {
                result.pop_back();
            }
            else if(s[i] == '#') {
                result += result;
            }
            else if(s[i] == '%' && !result.empty()) {
                reverse(result.begin(), result.end());
            }
            else if(s[i] != '*' && s[i] != '#' && s[i] != '%') {
                result.push_back(s[i]);
            }
        }

        return result;
    }
};