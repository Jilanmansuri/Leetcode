// Last updated: 02/06/2026, 15:02:01
1class Solution {
2public:
3
4    vector<int> plusOne(vector<int>& digits) {
5
6       
7        for(int i = digits.size() - 1; i >= 0; i--){
8
9            if(digits[i] < 9){
10                digits[i]++;
11                return digits;
12            }
13
14         
15            digits[i] = 0;
16        }
17
18     
19        digits.insert(digits.begin(), 1);
20
21        return digits;
22    }
23};