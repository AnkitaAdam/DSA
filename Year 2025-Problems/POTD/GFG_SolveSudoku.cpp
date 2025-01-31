class Solution {
  public:
    // Function to find a solved Sudoku.
    
    bool check(vector<vector<int>> &mat, int row, int col, int value){
        
        int newrow = row - row%3; int newcol = col - col%3;
        for(int i=0; i<9; i++) if(mat[i][col] == value) return false;
        for(int i=0; i<9; i++) if(mat[row][i] == value) return false;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(mat[newrow+i][newcol+j] == value) return false;
            }
        }
        
        return true;
         
    }
    bool solve(vector<vector<int>>&mat, int row, int col ){
        
        if(row == 9) return true;
        if(col == 9) return solve(mat, row+1, 0);
        if(mat[row][col]!=0) return solve(mat, row, col+1);
        
        for(int i=1;i<=9;i++){
            
            if(check(mat,row, col, i)){
                
                mat[row][col] = i;
                if(solve(mat,row, col+1)) return true;
                mat[row][col] = 0;
            }
        }
        
        return false;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        
        
        solve(mat, 0,0);
        
        
        
    }
};