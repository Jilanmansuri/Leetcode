class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;

        for(int num : nums) {
            if(num % 2 == 0)
                ans.push_back(0);
        }

        for(int num : nums) {
            if(num % 2 != 0)
                ans.push_back(1);
        }

        return ans;
    }
};