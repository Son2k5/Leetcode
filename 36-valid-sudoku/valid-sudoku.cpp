class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for( int row = 0; row < 9 ; row++){
            unordered_set<char> present;
            for(int i = 0; i< 9;i++){
                if(board[row][i]!='.') {
                    if(present.count(board[row][i])){
                        return false;
                    }
                    present.insert(board[row][i]);
                }
                
            }
        }
        for(int col = 0; col < 9; col++ ){
            unordered_set<char> cols;
            for(int i =0; i<9; i++){
                if(board[i][col] != '.'){
                    if(cols.count(board[i][col])){
                        return false;
                    }
                    cols.insert(board[i][col]);
                }
            }
        }
        for(int square = 0; square < 9; square++){
            unordered_set<char> boxs;
            for(int i =0 ; i < 3; i++){
                for(int j = 0; j< 3; j++){
                    int row= (square / 3) * 3+ i;
                    int col= (square % 3) * 3+ j ;
                    if(board[row][col]== '.') continue;
                    if(boxs.count(board[row][col])) return false;
                    boxs.insert(board[row][col]);

                }
            }   
        }
        return true;

    }
};