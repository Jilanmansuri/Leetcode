// Last updated: 22/05/2026, 20:14:17
1class Solution {
2public:
3    string removeTrailingZeros(string num) {
4
5        while (num.back() == '0') {
6            num.pop_back();
7        }
8
9        return num;
10    }
11};
12
13
14// class Solution {
15// public:
16//     string removeTrailingZeros(string num) {
17
18//         for(int i = num.size() - 1; i >= 0; i--) {
19
20//             if(num[i] == '0') {
21//                 num.pop_back();
22//             }
23//             else {
24//                 break;
25//             }
26
27//         }
28
29//         return num;
30//     }
31// };