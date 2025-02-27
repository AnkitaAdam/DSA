class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    int row [4] = {-1,1,0,0};
    int col [4] = {0,0,-1,1};
    
    bool isValid(int i,int j,int n,int m, vector<vector<int>> &grid){
        return i>=0 && i<n && j>=0 && j<m && grid[i][j]!=0;
    }
    
    bool dfs(int i,int j, int n,int m, vector<vector<int>> &grid){
        
        if(grid[i][j] == 2) return true;
        
        grid[i][j] = 0;
        
        for(int k=0;k<4;k++){
            
            int new_i = i+row[k];
            int new_j = j+col[k];
            
            if(isValid(new_i,new_j,n,m,grid)) {
                if(dfs(new_i,new_j,n,m,grid)) return true;
            }
        }
        
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        int x=-1;
        int y=-1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        
        
        return dfs(x,y,n,m,grid);
        
    }
};