// Last updated: 21/07/2026, 11:03:43
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        if (num == 1) {
5            return false;
6        }
7        int sum=0;
8        for (int i = 1; i < num; i++) {
9            if (num % i == 0) {
10                sum+=i;
11            }
12        }
13        return sum==num;
14    }
15};
16
17
18
19
20
21
22// class Solution {
23// public:
24//     bool checkPerfectNumber(int num) {
25//         if (num == 1) {
26//             return false;
27//         }
28//         int sum=1;
29//         for (int i = 2; i*i <= num; i++) {
30//             if (num % i == 0) {
31//                 sum+=i;
32
33//                 if(i!=num/i){
34//                     sum+=num/i;
35//                 }
36//             }
37//         }
38//         return sum==num;
39//     }
40// };