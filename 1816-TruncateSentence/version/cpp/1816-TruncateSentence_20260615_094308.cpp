// Last updated: 15/06/2026, 09:43:08
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        string cut="";
5        int count=0;
6        for (int i = 0; i < s.size(); i++) {
7            if (s[i] == ' ') {
8                count++;
9                if(count==k){
10                    return cut;
11                }
12            }
13                cut+=s[i];
14        }
15        return cut;
16       
17    }
18};
19
20
21
22
23
24
25// class Solution {
26// public:
27//     string truncateSentence(string s, int k) {
28//         int count=0;
29//         for (int i = 0; i < s.size(); i++) {
30//             if (s[i] == ' ') {
31//                 count++;
32//                 if(count==k){
33//                     return s.substr(0, i);
34//                 }
35//             }
36//         }
37//         return s;
38//     }
39// };