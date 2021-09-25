// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/

 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret ;
        for(int i = 0 ; i < numRows ; i++){
            vector<int> row(i+1,1);
            for(int j = 1 ; j < i ; j++){
                row[j] = ret[i - 1][j] + ret[i - 1][j - 1]; 
            }
            ret.push_back(row);
        }
        return ret ;
    }

//566. Reshape the Matrix
// https://leetcode.com/problems/reshape-the-matrix/

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size() , m = mat[0].size() ;
        vector<vector<int>> finalAns(r,vector<int> (c)) ;        
        if(n*m != r*c) return mat ;
        for(int i = 0 ; i < n*m ; i++){
               finalAns[i/c][i%c] = mat[i/m][i%m];
        }
                                   
        return finalAns ;
    }
