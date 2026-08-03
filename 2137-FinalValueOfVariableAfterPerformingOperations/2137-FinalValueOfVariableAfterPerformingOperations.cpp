// Last updated: 03/08/2026, 10:07:58
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int X = 0;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i].find('+') != string::npos) {
                X++;
            } 
            else {
                X--;
            }
        }

        return X;
    }
};