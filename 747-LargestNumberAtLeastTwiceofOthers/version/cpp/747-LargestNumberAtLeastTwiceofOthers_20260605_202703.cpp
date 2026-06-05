// Last updated: 05/06/2026, 20:27:03
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long first=LONG_MIN;
5        long second=LONG_MIN;
6        long third=LONG_MIN;
7
8      for(int num:nums){
9        if(num == first || num== second || num == third){
10            continue;
11        }
12        if(num > first){
13            third=second;
14            second=first;
15            first=num;
16        }
17
18        else if(num > second){
19            third = second;
20            second=num;
21        }
22
23        else if(num > third){
24            third =num;
25        }
26      }
27    return third == LONG_MIN ? first:third;
28    }
29};