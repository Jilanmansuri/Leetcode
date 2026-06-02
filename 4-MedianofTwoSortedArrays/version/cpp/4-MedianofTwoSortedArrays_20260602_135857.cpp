// Last updated: 02/06/2026, 13:58:57
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string prefix=strs[0];
5        for(int i=1;i<strs.size();i++){
6            while(strs[i].find(prefix)!=0){
7                prefix.pop_back();
8                if(prefix.empty()){
9                    return "";
10                }
11            }
12        }
13    return prefix;
14    }
15};