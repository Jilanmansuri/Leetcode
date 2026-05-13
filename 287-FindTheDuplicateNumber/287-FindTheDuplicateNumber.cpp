// Last updated: 13/05/2026, 13:10:34
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(nums.size(), 0);

        for(int num : nums){
            if(freq[num] == 1){
                return num;  
            }
            freq[num]++;
        }
        return -1;
    }
};