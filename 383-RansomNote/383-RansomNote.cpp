// Last updated: 03/08/2026, 10:11:56
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for (char ch : magazine)
            mp[ch]++;

        for (char ch : ransomNote) {
            if (mp[ch] == 0)
                return false;
            mp[ch]--;
        }

        return true;
    }
};