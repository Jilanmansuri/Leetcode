// Last updated: 03/08/2026, 10:08:27
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2){
            s[i]=s[i-1]+(s[i] - '0');
                    //      1 -0 =1
                    //   a +1=b   
        }
        return s;
    }
};