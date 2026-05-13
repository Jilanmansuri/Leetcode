// Last updated: 13/05/2026, 13:11:13
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);

                if(prefix == "") return "";
            }
        }

        return prefix;
    }
};





// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";

//         for(int i = 0; i < strs[0].length(); i++) {
//             char ch = strs[0][i];

//             for(int j = 1; j < strs.size(); j++) {
//                 if(i >= strs[j].length() || strs[j][i] != ch) {
//                     return ans;
//                 }
//             }

//             ans += ch;
//         }

//         return ans;
//     }
// };