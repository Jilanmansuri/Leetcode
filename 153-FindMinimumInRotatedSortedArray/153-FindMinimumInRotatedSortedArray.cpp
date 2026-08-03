// Last updated: 03/08/2026, 10:13:12
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mn){
                mn=nums[i];
            }
        }
        return mn;
    }
};