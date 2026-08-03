// Last updated: 03/08/2026, 10:05:43
class Solution {
public:
    char processStr(string s, long long k) {
        long long m = 0;

        // Calculate final length
        for (char c : s) {
            if (c == '*') {
                m = max(0LL, m - 1);
            } 
            else if (c == '#') {
                m <<= 1;
            } 
            else if (c != '%') {
                m++;
            }
        }

        if (k >= m) return '.';

        // Reverse process
        for (int i = s.size() - 1; ; i--) {
            char c = s[i];

            if (c == '*') {
                m++;
            } 
            else if (c == '#') {
                m /= 2;
                if (k >= m)
                    k -= m;
            } 
            else if (c == '%') {
                k = m - 1 - k;
            } 
            else {
                m--;
                if (k == m)
                    return c;
            }
        }

        return '.';
    }
};