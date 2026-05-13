// Last updated: 13/05/2026, 13:09:21
class Solution {
public:
    string clearDigits(string s) {

        string ans;

        for(char ch : s){

            if(ch >= '0' && ch <= '9'){

                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(ch);
            }
        }

        return ans;
    }
};