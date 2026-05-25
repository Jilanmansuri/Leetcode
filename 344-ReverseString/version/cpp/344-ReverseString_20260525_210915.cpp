// Last updated: 25/05/2026, 21:09:15
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4      int left =0;
5      int right =s.size()-1;
6
7      while(left<right){
8        swap(s[left],s[right]);
9        left++;
10        right--;
11      }
12         
13
14    }
15};