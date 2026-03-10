// Last updated: 10/03/2026, 10:03:33
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
          for(int i = 0; i < nums.size(); i++){

        for(int j = i + 1; j <= i + k && j < nums.size(); j++){

            if(nums[i] == nums[j]){
                return true;
            }

        }

    }

    return false;
    }
};