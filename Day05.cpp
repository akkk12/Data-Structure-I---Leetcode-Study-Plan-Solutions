// https://leetcode.com/problems/search-a-2d-matrix/submissions/
// 74. Search a 2D Matrix

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int i = 0 ;
        int j = n - 1 ;
        int m = matrix.size(); 
        while( i < m &&  0 <= j ){
            cout << matrix[i][j] << "  ";
            if(matrix[i][j] < target) i++ ;
            else if(matrix[i][j] > target ) j-- ;
            else return true ;
        }
        return false ;
    }

// 36. Valid Sudoku
// https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     int row[9] = {0};
     int col[9] = {0};
     int mat[3][3] = {0};
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[0].size() ; j++){
                if(board[i][j] != '.'){
                  int mask = 1 << (board[i][j] - '0') ;
                  if((row[i] & mask) == 0 && (col[j] & mask) == 0 && (mat[i/3][j/3]&mask) == 0){  
                    row[i] ^= mask ;
                    col[j] ^= mask ;
                    mat[i/3][j/3] ^= mask ;                                           
                }
                    else return false ;
                }
            }
        }
        return true ;
    }
};
