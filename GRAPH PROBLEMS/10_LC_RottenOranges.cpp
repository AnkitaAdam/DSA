class Solution {
public:
    int r,c;

    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};

    bool isValid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        
        r = grid.size();
        c = grid[0].size();

        queue< pair<int,int> > qu;

        int freshOranges = 0;

        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                if(grid[i][j] == 2){
                    qu.push({i,j});
                }else if(grid[i][j] == 1){
                    freshOranges++;
                }

        if(freshOranges==0) return 0;
        if(qu.empty()) return -1;
        int minutes=0;

        while(!qu.empty()){

            minutes++;

            int rottenOranges = qu.size();

            while(rottenOranges -- ){

                int i= qu.front().first;
                int j= qu.front().second;

                qu.pop();

                for(int k=0; k<4;k++){

                    if(isValid(i+row[k], j+col[k]) && grid[i+row[k]][j+col[k]] == 1){
                        //rote that orange
                        grid[i+row[k]][j+col[k]] = 2;
                        qu.push({i+row[k], j+col[k]});

                    }
                }
            }
        }

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(grid[i][j] == 1)
                    return -1;

        return minutes-1;
    }
};