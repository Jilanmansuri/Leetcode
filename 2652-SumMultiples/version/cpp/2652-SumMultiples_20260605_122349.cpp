// Last updated: 05/06/2026, 12:23:49
1class Solution {
2public:
3    int countDigits(int num) {
4        int temp =num;
5        int count=0;
6        while(temp>0){
7            int digit=temp%10;
8               if(num%digit==0){
9                count++;
10               }
11            temp=temp/10;
12        }
13        return count;
14    }
15};