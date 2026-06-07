// Last updated: 07/06/2026, 11:57:00
1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int count=0;
5        for(int i=0;i<grid.size();i++){
6            for(int j=0;j<grid[i].size();j++){
7                if(grid[i][j] < 0){
8                    count++;
9                }
10            }
11        }
12        return count;
13    }
14};