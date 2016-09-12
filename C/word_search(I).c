/* Given a 2D board and a word, find if the word exists in the grid.
   The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.
   For example,
          Given board =
                        [
                        ['A','B','C','E'],
                        ['S','F','C','S'],
                        ['A','D','E','E']
                        ]
        word = "ABCCED", -> returns true,
        word = "SEE", -> returns true,
        word = "ABCB", -> returns false.
*/

bool find_word(char** board, int row_size, int col_size, char* word, int row_index, int col_index) {
    if (*word == '\0') return true;
    //basic checking
    if (row_index < 0 || col_index < 0 || row_index >= row_size || col_index >= col_size || board[row_index][col_index] != word[0]) {
        return false;
    }
    
    char save = board[row_index][col_index];
    board[row_index][col_index] = '\0';
    //recursive call to check all sides for the next letter. If exists -> return true. Else, false
    if (find_word(board, row_size, col_size, word+1, row_index+1, col_index) ||
        find_word(board, row_size, col_size, word+1, row_index-1, col_index) ||
        find_word(board, row_size, col_size, word+1, row_index, col_index+1) ||
        find_word(board, row_size, col_size, word+1, row_index, col_index-1)) {
        return true; //the word exists in the board
    }
    board[row_index][col_index] = save;
    return false;
}

bool exist(char** board, int row_size, int col_size, char* word) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            if (find_word(board, row_size, col_size, word, i, j)) {
                return true; //word exists
            }
        }
    }
    // word does not exist
    return false;
}