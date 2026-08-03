// Last updated: 03/08/2026, 10:06:56
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        unordered_map<int,int> mp;
        vector<vector<int>> ans;

        for(int num : nums) {

            int freq = mp[num];

            if(ans.size() <= freq) {
                ans.push_back({});
            }

            ans[freq].push_back(num);
            mp[num]++;
        }

        return ans;
    }
};