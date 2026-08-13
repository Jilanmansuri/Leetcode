class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        int ans = 0;

        mp[0] = 1;

        for (int num : nums) {
            
            prefixSum += num;

            int rem = prefixSum % k;

            if (rem < 0) {
                rem += k;
            }

            ans += mp[rem];

            mp[rem]++;
        }

        return ans;
    }
};