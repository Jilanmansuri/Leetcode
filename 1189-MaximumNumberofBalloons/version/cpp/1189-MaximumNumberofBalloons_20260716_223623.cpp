// Last updated: 16/07/2026, 22:36:23
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4
5        unordered_map<char, int> mp;
6
7        // Count frequency of each character
8        for (char ch : text) {
9            mp[ch]++;
10        }
11
12        // 'l' and 'o' are needed twice in "balloon"
13        mp['l'] /= 2;
14        mp['o'] /= 2;
15
16        // Return the minimum count
17        return min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});
18    }
19};
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35// class Solution {
36// public:
37//     int maxNumberOfBalloons(string text) {
38
39//         int freq[26] = {0};
40
41//         for (char ch : text) {
42//             freq[ch - 'a']++;
43//         }
44
45//         return min({
46//             freq['b' - 'a'],
47//             freq['a' - 'a'],
48//             freq['l' - 'a'] / 2,
49//             freq['o' - 'a'] / 2,
50//             freq['n' - 'a']
51//         });
52//     }
53// };