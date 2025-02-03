class Solution {
public:
    int r,c;
    bool isValid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    void solve(vector<vector<char>>& board) {

        int row [4] = {-1,1,0,0};
        int col [4] = {0,0,-1,1};
        
        //using boundary order traversal..

        // if at any border if any o is found then the set lies for that o won't be able to surround with x
        r = board.size();
        c = board[0].size();
        queue<pair<int,int>> qu;


        //first row

        for(int i=0; i<c; i++){
            if(board[0][i] == 'O'){
                qu.push({0,i});
                board[0][i] = 'A';
            }
        }

        //first col
        for(int i=1; i<r; i++){
            if(board[i][0] == 'O'){
                qu.push({i,0});
                board[i][0] = 'A';
            }
        }

        //last row
        for(int i=1; i<c; i++){
            if(board[r-1][i] == 'O'){
                qu.push({r-1,i});
                board[r-1][i] = 'A';
            }
        }

        //last col
        for(int i=1; i<r-1;i++){
            if(board[i][c-1] == 'O'){
                qu.push({i,c-1});
                board[i][c-1] = 'A';
            }
        }

        //NOW ALL O's found ..now apply bfs for all O's to mark as A

        while(!qu.empty()){
            int rowno = qu.front().first;
            int colno = qu.front().second;

            qu.pop();

            for(int k =0 ; k<4; k++){
                
                int new_rowno = rowno+row[k];
                int new_colno = colno+col[k];
                if(isValid(new_rowno,new_colno) && board[new_rowno][new_colno] =='O'){
                    qu.push({new_rowno,new_colno});
                    board[new_rowno][new_colno] = 'A';
                }
            }
        }

        //now mark A's to O again which are cannot sourrounded and mark remaing O's with X
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == 'A'){
                    board[i][j] = 'O';
                }else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};