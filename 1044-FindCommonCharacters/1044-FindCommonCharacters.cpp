// Last updated: 03/08/2026, 10:10:16
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> ans;

        string first = words[0];

        for (char ch : first) {
           int ind;
            for (int i = 1; i < words.size(); i++) {
                ind = words[i].find(ch);
                if(ind == -1){
                    break;
                }
                else{
                    words[i].erase(ind,1);
                }
            }

            if(ind != -1){
                ans.push_back(string(1,ch));
            }
        }

        return ans;
    }
};