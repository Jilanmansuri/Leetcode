// Last updated: 03/08/2026, 10:13:15
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto i:mp){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};