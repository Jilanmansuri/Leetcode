// Last updated: 14/06/2026, 15:17:11
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string>ans;
5        for(int i=1;i<=n;i++){
6            if(i%3==0 && i%5==0){
7                ans.push_back("FizzBuzz");
8            }
9            else if(i%3==0){
10                ans.push_back("Fizz");
11            }
12            else if(i%5==0){
13                ans.push_back("Buzz");
14            }
15            else{
16                ans.push_back(to_string(i));
17            }
18        }
19        return ans;
20    }
21};