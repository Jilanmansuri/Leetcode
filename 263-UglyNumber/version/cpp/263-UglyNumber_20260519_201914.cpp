// Last updated: 19/05/2026, 20:19:14
1class Solution {
2public:
3    int findSpecialInteger(vector<int>& arr) {
4        int n=arr.size();
5        for(int i=0;i<n;i++){
6            if(i+n/4<n&&arr[i]==arr[i+n/4]){
7                return arr[i];
8            }
9        }
10        return -1;
11    }
12};