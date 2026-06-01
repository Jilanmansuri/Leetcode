// Last updated: 01/06/2026, 19:51:57
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> s;
5        for(int num:nums){
6            if(s.count(num)){
7                return true;
8            }
9
10            s.insert(num);
11        }
12        return false;
13    }
14};