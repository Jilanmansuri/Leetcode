// Last updated: 28/05/2026, 20:44:15
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4
5        int X = 0;
6
7        for (int i = 0; i < operations.size(); i++) {
8
9            if (operations[i].find('+') != string::npos) {
10                X++;
11            } 
12            else {
13                X--;
14            }
15        }
16
17        return X;
18    }
19};