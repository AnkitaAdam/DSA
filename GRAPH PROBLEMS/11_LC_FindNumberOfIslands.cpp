class Solution {
public:

    int r,c;

    //in 8 directions:
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};

    bool isValid(int i, int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        r = grid.size();
        c = grid[0].size();

        queue<pair<int,int>> qu;
        int count=0;

        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){

                if(grid[i][j] == '1'){
                    count++;

                    qu.push({i,j});
                    grid[i][j]='0';

                    while(!qu.empty()){

                        int rowno = qu.front().first;
                        int colno = qu.front().second;
                        qu.pop();

                        for(int k=0; k<4; k++){

                            int new_rowno = rowno+row[k];
                            int new_colno = colno+col[k];

                            if(isValid(new_rowno, new_colno) && grid[new_rowno][new_colno] == '1'){
                                qu.push({new_rowno, new_colno});
                                grid[new_rowno][new_colno] ='0';
                            }
                        }
                    }
                }
            }
        }

        return count;
    }
};