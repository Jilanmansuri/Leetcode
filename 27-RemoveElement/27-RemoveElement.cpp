// Last updated: 13/05/2026, 13:11:10
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; 
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};