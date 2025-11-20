class Solution {
public:
    bool solve(int i, int j, int idx, string &word, vector<vector<char>>& board, int m, int n) {
        if (idx == word.length()) {
            return true; 
        }
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[idx]) {
            return false; 
        }
        char temp = board[i][j]; // Save current cell
        board[i][j] = '#';       // Mark as visited

        
        bool found = solve(i, j - 1, idx + 1, word, board, m, n) || // Left
                     solve(i, j + 1, idx + 1, word, board, m, n) || // Right
                     solve(i - 1, j, idx + 1, word, board, m, n) || // Up
                     solve(i + 1, j, idx + 1, word, board, m, n);   // Down

        board[i][j] = temp; // Restore cell to original state
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        // Start backtracking from every cell
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && solve(i, j, 0, word, board, m, n)) {
                    return true;
                }
            }
        }
        return false;
    }
};