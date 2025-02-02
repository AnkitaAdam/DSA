class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool DFS(int node, vector<vector<int>>&adj, vector<bool>&path, vector<bool>&visited){
        
        path[node] = 1;
        visited[node] = 1;
        
        for(int i=0; i<adj[node].size(); i++){
            
            if(path[adj[node][i]]) return 1;
            
            if(visited[adj[node][i]]) continue;
            
            if(DFS(adj[node][i], adj, path, visited)) return 1;
            
        }
        
        
        path[node]= 0;
        
        return 0;
    }
    
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        
        
        //DFS APPROACH:
        
        
        // vector<bool>path(V,0); //dfs stack
        
        // vector<bool> visited(V,0);
        
        // for(int i=0;i<V; i++){
            
        //     if(!visited[i] && DFS(i, adj, path, visited)){
        //         return 1;
        //     }
        // }
        
        // return 0;
        
        
        //BFS APPROACH:
        
        vector<int>inDegree(V,0);
        
        for(int i=0;i<V;i++){
            
            for(int j=0;j<adj[i].size();j++){
                
                inDegree[adj[i][j]]++;
                
            }
        }
        
        
        queue<int>qu;
        int cnt=0;
        
        for(int i=0;i<V;i++){
            
            if(!inDegree[i]){
                 qu.push(i);
                 cnt++;
            }
            
        }
        
        while(!qu.empty()){
            
            
            int node = qu.front(); 
            qu.pop();
            
            for(int i=0;i<adj[node].size();i++){
                
                inDegree[adj[node][i]]--;
                if(!inDegree[adj[node][i]]) {
                    qu.push(adj[node][i]);
                    cnt++;
                }
                
            }
        }
        
        
        return cnt!=V;
        
    }
};
