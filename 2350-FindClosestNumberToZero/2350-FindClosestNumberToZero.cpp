// Last updated: 13/05/2026, 13:09:42
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int dist=nums[0];
        for(int i:nums){
           if( abs(i) < abs(dist) ){
            dist=i;
           }
           
           else if((abs(dist) == abs(i) )&& i>dist ){
                  dist=i;  
           }
        }
        return dist;
    }
};