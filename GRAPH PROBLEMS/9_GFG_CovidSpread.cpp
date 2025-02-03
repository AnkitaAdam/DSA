
class Solution {
public:
    
    int r,c;
        
    int row[4] = {-1,1,0,0,};
    int col[4] = {0, 0, -1, 1};
        
    bool isValid(int i, int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        
        r = hospital.size();
        c = hospital[0].size();
        queue<pair<int,int>> qu;
        
       int flag=false;
        
        for(int i=0; i<r; i++){
            
            for(int j=0; j<c; j++){
                
                if(hospital[i][j] == 2){
                    qu.push({i,j});
                    flag=true;
                }
            }
        }
        
        if(!flag) return 0;
        
        int time=0;
        
        while(!qu.empty()){
            
            time++;
            
            int infected = qu.size();
            
            while(infected--){
                
                int i = qu.front().first;
                int j = qu.front().second;
                
                qu.pop();
                
                for(int k=0; k<4; k++){
                    
                    if(isValid(i+row[k],j+col[k]) && hospital[i+row[k]][j+col[k]] == 1){
                        //then that cell becomes infected now..
                        
                        hospital[i+row[k]][j+col[k]] = 2;
                        qu.push({i+row[k], j+col[k]});
                        
                    }
                }
            }
        }
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(hospital[i][j]==1) return -1;
                
        
        return time-1;
    }
};
