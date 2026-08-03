// Last updated: 03/08/2026, 10:13:19
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int num:nums){
            ans ^=num;
        }
        return ans;
    }
};

 
