// Last updated: 10/05/2026, 13:16:53
1class Solution {
2public:
3    int findClosestNumber(vector<int>& nums) {
4        int dist=nums[0];
5        for(int i:nums){
6           if( abs(i) < abs(dist) ){
7            dist=i;
8           }
9           
10           else if((abs(dist) == abs(i) )&& i>dist ){
11                  dist=i;  
12           }
13        }
14        return dist;
15    }
16};