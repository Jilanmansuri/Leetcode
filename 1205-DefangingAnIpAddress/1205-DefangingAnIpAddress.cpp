// Last updated: 03/08/2026, 10:10:00
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;

        for(char ch : address){
            if(ch == '.'){
                ans += "[.]";
            }
            else{
                ans += ch;
            }
        }

        return ans;
    }
};