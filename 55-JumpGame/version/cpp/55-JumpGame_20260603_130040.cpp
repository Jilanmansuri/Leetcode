// Last updated: 03/06/2026, 13:00:40
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left=0;
5        int right=s.size()-1;
6        while(left<right){
7            while(left<right && !isalnum(s[left])){
8            left++;
9            }
10            while(left<right && !isalnum(s[right])){
11                right--;
12            }
13            if(tolower(s[left]) != tolower(s[right])){
14                return false;
15            }
16            left ++;
17            right--;
18
19        }
20        return true;
21    }
22};