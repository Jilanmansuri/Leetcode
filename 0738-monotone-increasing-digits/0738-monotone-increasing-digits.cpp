class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);

        int i = s.size() - 1;

        while (i > 0) {
            if (s[i] < s[i - 1]) {
                s[i - 1]--;
                
                for (int j = i; j < s.size(); j++) {
                    s[j] = '9';
                }
            }

            i--;
        }

        return stoi(s);
    }
};