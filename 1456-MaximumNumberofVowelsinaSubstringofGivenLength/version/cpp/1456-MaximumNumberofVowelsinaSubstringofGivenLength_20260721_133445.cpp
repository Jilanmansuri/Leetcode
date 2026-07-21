// Last updated: 21/07/2026, 13:34:45
1class Solution {
2public:
3    bool isVowel(char ch) {
4        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
5    }
6
7    int maxVowels(string s, int k) {
8        int count = 0;
9        for (int i = 0; i < k; i++) {
10            if (isVowel(s[i])) {
11                count++;
12            }
13        }
14
15        int ans = count;
16        for (int i = k; i < s.size(); i++) {
17            if (isVowel(s[i - k])) {
18                count--;
19            }
20
21            if (isVowel(s[i])) {
22                count++;
23            }
24            ans = max(ans, count);
25        }
26
27        return ans;
28    }
29};