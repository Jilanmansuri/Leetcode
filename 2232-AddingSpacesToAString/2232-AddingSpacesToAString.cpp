// Last updated: 03/08/2026, 10:07:45
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans = "";
        int j = 0;

        for (int i = 0; i < s.size(); i++) {

            if (j < spaces.size() && i == spaces[j]) {
                ans += ' ';
                j++;
            }

            ans += s[i];
        }

        return ans;
    }
};