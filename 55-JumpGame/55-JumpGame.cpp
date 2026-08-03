// Last updated: 03/08/2026, 10:13:44
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;

        for(int i=0;i<nums.size();i++){
            if(i>reach){
                return false;
            }
            reach = max(reach,i+nums[i]);
        }
        return true;
    }
};