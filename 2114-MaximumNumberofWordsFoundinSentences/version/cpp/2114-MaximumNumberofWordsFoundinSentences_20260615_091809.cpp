// Last updated: 15/06/2026, 09:18:09
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxi = 0;
5        for (int i = 0; i < sentences.size(); i++) {
6            int count = 1;
7            for (char ch : sentences[i]) {
8                if (ch == ' ') {
9                    count++;
10                }
11            }
12            maxi = max(maxi, count);
13        }
14        return maxi;
15    }
16};