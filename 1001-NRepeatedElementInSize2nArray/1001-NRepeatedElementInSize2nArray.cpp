// Last updated: 03/08/2026, 10:10:25
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>seen;
        for(int num:nums){
            if(seen.count(num)){
                return num;
            }
            seen.insert(num);
        }
        return -1;
    }
};