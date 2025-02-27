class Solution {
    public:
    
        int row[8] = {2,2,-2,-2,-1,1,-1,1};
        int col[8] = {-1,1,-1,1,-2,-2,2,2};
        
        bool isValid(int i,int j, int n){
            return i>=0 && i<n && j>=0 && j<n;
        }
        
        
        int minStepToReachTarget(vector<int>&knightPos, vector<int>&TargetPos, int N){
            // Code here
            
            knightPos[0]--;
            knightPos[1]--;
            TargetPos[0]--;
            TargetPos[1]--;
            
            if(knightPos[0]==TargetPos[0] && knightPos[1] == TargetPos[1]) return 0;
            
            vector<vector<bool>> chessBoard(N,vector<bool>(N,0));
            queue<pair<int,int>> qu;
            qu.push({knightPos[0],knightPos[1]});
            chessBoard[knightPos[0]][knightPos[1]]=1;
            
            int step = 0;
            
            
            while(!qu.empty()){
                
                int size = qu.size();
                
                while(size--){
                    
                    int i = qu.front().first;
                    int j = qu.front().second;
                    qu.pop();
                    
                    for(int k=0;k<8;k++){
                        
                        int new_i = i+row[k];
                        int new_j = j+col[k];
                        
                            if(isValid(new_i,new_j,N) && !chessBoard[new_i][new_j]){
                            
                            if(new_i == TargetPos[0] && new_j == TargetPos[1]) return step+1;
                            
                            qu.push({new_i,new_j});
                            chessBoard[new_i][new_j] = 1;
                   
                        } 
                    }
                }
                
                step++;
                
            }
            
            return -1;
        }
    };