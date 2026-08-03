// Last updated: 03/08/2026, 10:09:45
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance=0;
        int count=0;
        for(char ch:s){
            if(balance==0){
                count++;
            }
            if(ch=='R'){
                balance--;
            }
            if(ch=='L'){
                balance++;
            }

        }
        return count;
    }
};