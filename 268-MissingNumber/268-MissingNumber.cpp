// Last updated: 03/08/2026, 10:12:19
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expected=n * (n+1)/2;

        int actual =0;
        for(int num:nums){
            actual+=num;
        }
    return expected -actual;
    }
};