class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int num:n){
            ans=max(ans,num-'0');
        }
        return ans;
    }
};