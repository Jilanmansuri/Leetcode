// Last updated: 03/08/2026, 10:08:24
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
          if(nums[i] == target ){
            if(abs(i-start)<mn){
             mn=abs(i-start);
            }
          }
        }
        return mn;
    }
};