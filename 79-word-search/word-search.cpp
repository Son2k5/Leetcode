class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // use backtracking
        int m= board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j= 0; j < n; j++){
                if(backtracking(0 , board, word, i , j)){
                    return true;
                }
            }
        } 
        return false;
    }
private:
    bool backtracking(int index, vector<vector<char>>& board, string word, int i, int j){
        if(index == word.size()) return true;
        if( i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) return false;

        char temp = board[i][j];
        board[i][j] = '_';

        bool check = backtracking(index +1, board, word, i+1, j)||
                    backtracking(index +1, board, word, i-1, j )||
                    backtracking(index+1, board, word, i, j+1)||
                    backtracking(index +1, board, word, i , j-1);

        board[i][j] = temp;
        return check;

    }
};