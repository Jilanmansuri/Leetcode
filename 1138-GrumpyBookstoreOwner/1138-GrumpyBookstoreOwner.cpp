// Last updated: 03/08/2026, 10:10:05
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        int base = 0;
        
        // Step 1: already satisfied customers
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0){
                base += customers[i];
            }
        }
        
        // Step 2: sliding window for extra
        int extra = 0, max_extra = 0;
        
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 1){
                extra += customers[i];
            }
            
            // window size maintain
            if(i >= minutes){
                if(grumpy[i - minutes] == 1){
                    extra -= customers[i - minutes];
                }
            }
            
            max_extra = max(max_extra, extra);
        }
        
        return base + max_extra;
    }
};