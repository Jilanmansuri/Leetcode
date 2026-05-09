// Last updated: 09/05/2026, 13:22:56
1class Solution {
2public:
3    string clearDigits(string s) {
4
5        string ans;
6
7        for(char ch : s){
8
9            if(ch >= '0' && ch <= '9'){
10
11                if(!ans.empty()){
12                    ans.pop_back();
13                }
14            }
15            else{
16                ans.push_back(ch);
17            }
18        }
19
20        return ans;
21    }
22};