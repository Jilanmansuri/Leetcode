// Last updated: 03/08/2026, 10:06:41
class Solution {
public:
    string removeTrailingZeros(string num) {

        while (num.back() == '0') {
            num.pop_back();
        }

        return num;
    }
};


// class Solution {
// public:
//     string removeTrailingZeros(string num) {

//         for(int i = num.size() - 1; i >= 0; i--) {

//             if(num[i] == '0') {
//                 num.pop_back();
//             }
//             else {
//                 break;
//             }

//         }

//         return num;
//     }
// };