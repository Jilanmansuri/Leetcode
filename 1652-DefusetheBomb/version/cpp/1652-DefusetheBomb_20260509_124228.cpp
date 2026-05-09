// Last updated: 09/05/2026, 12:42:28
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        
5        int n = code.size();
6        vector<int> ans(n);
7
8        if(k == 0){
9            return vector<int>(n, 0);
10        }
11
12        for(int i = 0; i < n; i++){
13
14            int sum = 0;
15
16            if(k > 0){
17                for(int j = 1; j <= k; j++){
18                    sum += code[(i + j) % n];
19                }
20            }
21
22            else{
23                for(int j = 1; j <= abs(k); j++){
24                    sum += code[(i - j + n) % n];
25                }
26            }
27
28            ans[i] = sum;
29        }
30
31        return ans;
32    }
33};