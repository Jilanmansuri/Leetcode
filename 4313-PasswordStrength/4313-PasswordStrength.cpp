// Last updated: 03/08/2026, 10:05:32
class Solution {
public:
    int passwordStrength(string password) {

        set<char> st;

        int points = 0;

        for (char ch : password) {

            if (st.count(ch)) {
                continue;
            }

            st.insert(ch);

            // lowercase
            if (ch >= 97 && ch <= 122) {
                points += 1;
            }

            // uppercase
            else if (ch >= 65 && ch <= 90) {
                points += 2;
            }

            // digit
            else if (ch >= 48 && ch <= 57) {
                points += 3;
            }

            // special characters
            else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
                points += 5;
            }
        }

        return points;
    }
};