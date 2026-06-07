// Last updated: 07/06/2026, 12:10:27
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4        vector<int> copyarr = heights;
5        sort(copyarr.begin(),copyarr.end());
6
7        int count=0;
8        for(int i=0;i<heights.size();i++){
9            if(copyarr[i] !=heights[i]){
10                count++;
11            }
12        }
13        return count;
14    }
15};