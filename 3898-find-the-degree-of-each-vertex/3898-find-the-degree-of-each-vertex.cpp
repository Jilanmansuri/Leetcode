class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for (vector<int> mat : matrix) {
            int sum = 0;
            for (int i = 0; i < mat.size(); i++) {
                sum += mat[i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};