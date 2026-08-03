// Last updated: 03/08/2026, 10:08:30
class Solution {
public:
    string truncateSentence(string s, int k) {
        string cut="";
        int count=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                count++;
                if(count==k){
                    return cut;
                }
            }
                cut+=s[i];
        }
        return cut;
       
    }
};






// class Solution {
// public:
//     string truncateSentence(string s, int k) {
//         int count=0;
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == ' ') {
//                 count++;
//                 if(count==k){
//                     return s.substr(0, i);
//                 }
//             }
//         }
//         return s;
//     }
// };