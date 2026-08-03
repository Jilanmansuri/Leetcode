// Last updated: 03/08/2026, 10:05:48
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
       int count=sum%k;

    return count;
    }
};