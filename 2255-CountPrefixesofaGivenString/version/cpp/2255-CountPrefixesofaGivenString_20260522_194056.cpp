// Last updated: 22/05/2026, 19:40:56
1class Solution {
2public:
3    int minimizedStringLength(string s) {
4          unordered_set<char> st;
5        for(char ch:s){
6            st.insert(ch);
7        }
8
9        return st.size();
10
11    }
12};