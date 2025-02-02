class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    // //DFS Approach
    // bool detectTheCycle(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited){
        
    //     visited[node] = 1;
        
    //     for(int i=0;i<adj[node].size(); i++){
            
    //         //conditions ..
    //         // 1-> if coming node is parent then continue;
    //         //2 -> if already visited declare cycle is detected..
    //         //3 -> else mark it as visited
            
    //         if(parent == adj[node][i]) continue;
            
    //         if(visited[adj[node][i]] == 1) return 1;
            
    //         if(detectTheCycle(adj[node][i], node, adj, visited)) return 1;
            
    //     }
        
    //     return 0;
    // }
    
    
    bool detectTheCycle( int vertex, vector<vector<int>> adj, vector<bool> &visited){
        
        visited[vertex] =1;
        queue<pair<int,int>> qu;
        qu.push({ vertex, -1});
        
        
        while(!qu.empty()){
            
            int node = qu.front().first;
            int parent = qu.front().second;
            
            qu.pop();
            
            for(int i=0 ; i<adj[node].size(); i++){
                
                if(parent == adj[node][i]) continue;
                
                if(visited[adj[node][i]]) return 1;
                
                visited[adj[node][i]] =1;
                
                qu.push({adj[node][i], node});
                
            }
        }
        return 0;
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        
        vector<bool> visited(adj.size(),0);
       
       //check whether all nodes are visited or not...it is important to check if graph is disconnected
        for(int i=0; i<adj.size(); i++){
            
            if(!visited[i] && detectTheCycle(i,adj, visited)){
                return 1;
            }
        }
        
        
        
        return 0;
        
    }
};4