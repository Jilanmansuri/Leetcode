// Last updated: 03/08/2026, 10:10:09
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copyarr = heights;
        sort(copyarr.begin(),copyarr.end());

        int count=0;
        for(int i=0;i<heights.size();i++){
            if(copyarr[i] !=heights[i]){
                count++;
            }
        }
        return count;
    }
};