class Solution {
    public:
    
        void DFS(int node, vector<int>&visited, vector<int> adj[]){
            
            visited[node] = 1;
            
            for(int i=0;i<adj[node].size();i++){
                if(!visited[adj[node][i]]){
                    DFS(adj[node][i], visited, adj);
                }
            }
        }
        
        int isEulerCircuit(int V, vector<int>adj[]){
            // Code here
            
            
            //euler circuit
            //check the degree of each node
            //if any degree is odd return 0
            //check all non zero degree node..should be part of one component
            
            //euler path
            //check degree of each node
            //if zero or two nodes have odd degree then there is euler path
            //check all non zero degree node..shd be part of one component
            
            vector<int>degree (V,0);
            
            for(int i=0; i<V; i++){
                
                degree[i] = adj[i].size();
                
                
            }
            
            int oddDegree=0;
            
            for(int i: degree){
                if(i%2) oddDegree++;
            }
            
            if(oddDegree!=0 && oddDegree!=2) return 0;
            
            vector<int> visited(V,0);
            
            for(int i=0;i<V;i++){
                if(degree[i]){
                    DFS(i,visited,adj);
                    break;
                }
            }
            
            
            for(int i=0;i<V;i++){
                if(degree[i] && !visited[i]){
                    return 0;
                }
            }
            
            if(oddDegree==0) return 2;
            
            return 1;
        }
        
    };