class Solution {
    public:
    
      int row[4] = {-1,1,0,0};
      int col[4] = {0,0,-1,1};
      
      bool isValid(int i,int j,int n,int m){
          return i>=0&&i<n&&j>=0&&j<m;
      }
      int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
          // code here
          
          if(A[0][0] == 0) return -1;
          
          if(X==0 && Y==0) return 0;
          
          //row,col,step;
          queue<pair<int,pair<int,int>>> qu;
          qu.push({0,{0,0}});
          A[0][0] = 0;
          
          while(!qu.empty()){
              
              int i = qu.front().first;
              int j = qu.front().second.first;
              int step = qu.front().second.second;
              qu.pop();
              
              for(int k = 0; k<4; k++){
                  
                  int new_i = i+row[k];
                  int new_j = j+col[k];
                  if(isValid(new_i,new_j,N,M) && A[new_i][new_j]){
                      
                      if(new_i==X && new_j==Y) return step+1;
                      
                      A[new_i][new_j] = 0;
                      qu.push({new_i,{new_j,step+1}});
                      
                  }
              }
              
          }
          
          return -1;
          
      }
  };