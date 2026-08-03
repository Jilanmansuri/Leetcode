// Last updated: 03/08/2026, 10:12:26
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }

        for(char c:t){
            mp[c]--;
        }
        
        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};