class Solution
{
    public:
    
    
    bool DFS(int node, vector<vector<int>> &adj, vector<int>&visited, int &nodes, int &N){
        
        visited[node] = 1;
        nodes++;
        
        if(nodes == N) return 1;
        
        for(int i=0;i<adj[node].size(); i++){
            
            if(!visited[adj[node][i]] && DFS(adj[node][i], adj, visited, nodes, N)){
               return 1 ;
            }
            
        }
        
        visited[node] = 0;
        nodes--;
        return 0;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        
        vector<vector<int>> adj(N);
        
        for(int i=0;i<M;i++){
            
            int u = Edges[i][0];
            int v = Edges[i][1];
            
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
            
            
        }
        
        vector<int> visited(N,0);
        int nodes =0;
        
        for(int i=0;i<N;i++){
           if (DFS(i, adj, visited, nodes, N)) return 1;
            
        }
        
        return 0;
        
    }
};