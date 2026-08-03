// Last updated: 03/08/2026, 10:05:45
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        int maxivowel = 0;
        int maxiconst = 0;

        for (auto it : mp) {
            if (it.first == 'a' || it.first == 'e' ||
                it.first == 'i' || it.first == 'o' ||
                it.first == 'u') {

                maxivowel = max(maxivowel, it.second);
            }
            else {
                maxiconst = max(maxiconst, it.second);
            }
        }

        return maxivowel + maxiconst;
    }
};