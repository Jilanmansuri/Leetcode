// Last updated: 03/08/2026, 10:09:50
class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> mp;

        // Count frequency of each character
        for (char ch : text) {
            mp[ch]++;
        }

        // 'l' and 'o' are needed twice in "balloon"
        mp['l'] /= 2;
        mp['o'] /= 2;

        // Return the minimum count
        return min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});
    }
};















// class Solution {
// public:
//     int maxNumberOfBalloons(string text) {

//         int freq[26] = {0};

//         for (char ch : text) {
//             freq[ch - 'a']++;
//         }

//         return min({
//             freq['b' - 'a'],
//             freq['a' - 'a'],
//             freq['l' - 'a'] / 2,
//             freq['o' - 'a'] / 2,
//             freq['n' - 'a']
//         });
//     }
// };