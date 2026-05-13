// Last updated: 13/05/2026, 13:09:41
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool inside = false;

        for(char ch:s){
            if(ch=='|'){
                inside=!inside;
            }
           else if(ch == '*' && !inside) {
                count++;
            }
        }
        return count;
    }
};