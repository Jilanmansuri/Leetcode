// Last updated: 13/05/2026, 13:10:21
class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(char ch:s){
            res += tolower(ch);
        }
        return res;
    }
};