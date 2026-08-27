class Solution {
public:

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {

        // Check row
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == num)
                return false;
        }

        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num)
                return false;
        }

        // Check 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                // Empty cell mila
                if (board[i][j] == '.') {

                    // 1 to 9 try karo
                    for (char num = '1'; num <= '9'; num++) {

                        if (isValid(board, i, j, num)) {

                            // Number place karo
                            board[i][j] = num;

                            // Baaki Sudoku solve karo
                            if (solve(board))
                                return true;

                            // Galat choice thi -> backtrack
                            board[i][j] = '.';
                        }
                    }

                    // Koi bhi number nahi laga
                    return false;
                }
            }
        }

        // Koi empty cell nahi bacha
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};