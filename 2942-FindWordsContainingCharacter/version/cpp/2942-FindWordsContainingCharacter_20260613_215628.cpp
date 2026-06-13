// Last updated: 13/06/2026, 21:56:28
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int>ans;
5          for(int i=0;i<words.size();i++){
6            for(char ch:words[i]){
7                if(ch==x){
8                    ans.push_back(i);
9                    break;
10                }
11            }
12          }
13
14        return ans;
15    }
16};