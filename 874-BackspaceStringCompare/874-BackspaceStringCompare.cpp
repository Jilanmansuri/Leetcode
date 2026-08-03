// Last updated: 03/08/2026, 10:10:35
class Solution {
public:

    string build(string str){
        string result;
        for(char ch:str){
            if(ch != '#'){
                result.push_back(ch);
            }
            else if(!result.empty()){
                result.pop_back();
            }
        }
        return result;
    }


    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};