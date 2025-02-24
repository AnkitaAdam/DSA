class Solution {
  public:
    
    void DFS(int node, vector<pair<int,int>>adj[],vector<bool>&visited, stack<int>&st){
        
        visited[node] = 1;
        for(int i=0; i<adj[node].size();i++){
            if(!visited[adj[node][i].first]){
                DFS(adj[node][i].first, adj, visited, st);
            }
        }
        st.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        
        vector<pair<int,int>> adj[V]; //edge with weight
        for(int i=0;i<E;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back({v,weight});
        }
        
        //topological sorting by dfs
        stack<int> st;
        vector<bool>visited(V,0);
        DFS(0, adj, visited, st);
        
        //calculate the distance
        vector<int> dist(V, INT_MAX);
        dist[0]=0;
        
        while(!st.empty()){
            
            int node = st.top();
            st.pop();
            
            for(int i=0; i<adj[node].size(); i++){
                
                int neighbour = adj[node][i].first;
                int weight = adj[node][i].second;
                
                dist[neighbour] = min(dist[neighbour], weight+dist[node]);
                
            }
        }
        
        for(int i=0;i<V;i++){
            if(dist[i] == INT_MAX){
                dist[i] = -1;
            }
        }
        
        return dist;
        
    }
};