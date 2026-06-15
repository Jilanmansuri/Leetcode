// Last updated: 15/06/2026, 09:31:24
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4       unordered_set<char>st;
5       for(char ch:sentence){
6        st.insert(ch);
7       }
8       return st.size()==26;
9    }
10};