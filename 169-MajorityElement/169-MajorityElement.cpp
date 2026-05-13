// Last updated: 13/05/2026, 13:10:51
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;

            if (mp[num] > nums.size() / 2) {
                return num;
            }
        }
    return -1;
    }
};





// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int candidate = 0;

//         for(int num : nums) {
//             if(count == 0) {
//                 candidate = num;
//             }

//             if(num == candidate) {
//                 count++;
//             } else {
//                 count--;
//             }
//         }

//         return candidate;
//     }
// };