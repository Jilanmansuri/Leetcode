// Last updated: 03/08/2026, 10:07:41
class Solution {
public:
    bool checkString(string s) {
        for (int i = 0; i < s.size()-1; i++) {
            if(s[i]=='b' && s[i+1]=='a'){
                return false;
            }
        }
        return true;
    }
};