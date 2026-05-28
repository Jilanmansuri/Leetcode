// Last updated: 28/05/2026, 20:10:40
1class Solution {
2public:
3    int passwordStrength(string password) {
4
5        set<char> st;
6
7        int points = 0;
8
9        for (char ch : password) {
10
11            if (st.count(ch)) {
12                continue;
13            }
14
15            st.insert(ch);
16
17            // lowercase
18            if (ch >= 97 && ch <= 122) {
19                points += 1;
20            }
21
22            // uppercase
23            else if (ch >= 65 && ch <= 90) {
24                points += 2;
25            }
26
27            // digit
28            else if (ch >= 48 && ch <= 57) {
29                points += 3;
30            }
31
32            // special characters
33            else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
34                points += 5;
35            }
36        }
37
38        return points;
39    }
40};