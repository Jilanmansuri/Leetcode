// Last updated: 13/05/2026, 13:39:12
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        unordered_set<char> s;
5        for (char ch : sentence) {
6            s.insert(ch);
7        }
8        return s.size() == 26;
9    }
10};