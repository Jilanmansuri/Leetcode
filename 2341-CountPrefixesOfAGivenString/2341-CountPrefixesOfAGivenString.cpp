// Last updated: 03/08/2026, 10:07:31
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for (string word : words) {
            if (s.find(word) == 0) {
                count++;
            }
        }
        return count;
    }
};