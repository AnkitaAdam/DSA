
class Solution {
  public:
  bool checkDiagonally(int i, int j, int n, vector<string>&board){

        int row =i;
        int col =j;

        //check for upper left side
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row --;
            col --;

        }

        row =i;
        col = j;
        
        //check for upper righ tside

        while(row>=0 && col <n){
            if(board[row][col] == 'Q'){
                return false;
            }
            row --;
            col ++;
        }

        return true;

    }
    void fidQueenPosition(int row, int n, vector<vector<int>> &ans, vector<string> &board, vector<bool> &column, vector<int> &pos){
        if(row == n){
            ans.push_back(pos);
            return;  
        }

        for(int j=0;j<n;j++){
            if(!column[j] && checkDiagonally(row, j, n, board)){
                board[row][j]='Q';
                column[j]=1;
                pos.push_back(j+1);
                fidQueenPosition(row+1, n, ans, board,column,pos);
                board[row][j]='.';
                column[j]=0;
                pos.pop_back();
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        
        vector<vector<int>> ans;
        vector<string> board (n, string (n, '.'));
        vector<bool> column(n,0);
        
        vector<int>pos;
  
        fidQueenPosition(0,n, ans, board,column,pos);

        return ans;
        
        
        
    }
};

