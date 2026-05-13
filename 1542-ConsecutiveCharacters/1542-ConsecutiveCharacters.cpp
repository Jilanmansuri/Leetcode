// Last updated: 13/05/2026, 13:09:56
class Solution {
public:
    int maxPower(string s) {
        if (s.size() == 1) {
            return 1;
        }
        int count=1;
        int maxcount=0;

        for (int i = 0; i < s.size() - 1; i++) {
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }

        return maxcount;
    }
};