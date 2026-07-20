// Last updated: 20/07/2026, 15:10:43
1// class Solution {
2// public:
3//     int findDuplicate(vector<int>& nums) {
4//         unordered_map<int,int> mp;
5//         for(int num:nums){
6//             if(mp[num]>0){
7//                 return num;
8//             }
9//             mp[num]++;
10//         }
11//         return -1;
12//     }
13// };
14
15
16
17
18
19
20
21
22
23class Solution {
24public:
25    int findDuplicate(vector<int>& nums) {
26       unordered_set<int> st;
27       for(int num:nums){
28        if(st.count(num)){
29            return num;
30        }
31        st.insert(num);
32       }
33       return -1;
34    }
35};