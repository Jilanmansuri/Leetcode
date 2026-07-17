// Last updated: 17/07/2026, 09:22:27
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        unordered_map<char, int> mp;
5
6        for (char ch : magazine)
7            mp[ch]++;
8
9        for (char ch : ransomNote) {
10            if (mp[ch] == 0)
11                return false;
12            mp[ch]--;
13        }
14
15        return true;
16    }
17};