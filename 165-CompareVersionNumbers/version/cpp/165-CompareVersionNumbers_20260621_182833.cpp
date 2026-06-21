// Last updated: 21/06/2026, 18:28:33
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i = 0, j = 0;
5        int n1 = version1.size();
6        int n2 = version2.size();
7
8        while (i < n1 || j < n2) {
9            int num1 = 0, num2 = 0;
10
11            while (i < n1 && version1[i] != '.') {
12                num1 = num1 * 10 + (version1[i] - '0');
13                i++;
14            }
15
16            while (j < n2 && version2[j] != '.') {
17                num2 = num2 * 10 + (version2[j] - '0');
18                j++;
19            }
20
21            if (num1 > num2) return 1;
22            if (num1 < num2) return -1;
23
24            i++; 
25            j++; 
26        }
27
28        return 0;
29    }
30};