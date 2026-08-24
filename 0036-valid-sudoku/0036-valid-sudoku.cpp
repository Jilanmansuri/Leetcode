class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                char num = board[i][j];

                // Row check
                for (int k = 0; k < 9; k++) {
                    if (k != j && board[i][k] == num)
                        return false;
                }

                // Column check
                for (int k = 0; k < 9; k++) {
                    if (k != i && board[k][j] == num)
                        return false;
                }

                // 3 x 3 box check
                for (int k = 0; k < 9; k++) {
                    int r = (i / 3) * 3 + k / 3;
                    int c = (j / 3) * 3 + k % 3;

                    if ((r != i || c != j) && board[r][c] == num)
                        return false;
                }
            }
        }

        return true;
    }
};