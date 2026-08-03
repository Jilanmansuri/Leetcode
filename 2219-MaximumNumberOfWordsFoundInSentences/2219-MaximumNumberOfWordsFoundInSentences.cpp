// Last updated: 03/08/2026, 10:07:49
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int count = 1;
            for (char ch : sentences[i]) {
                if (ch == ' ') {
                    count++;
                }
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};