class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        
        
        
        vector<pair<int,int>> adj[n+1];
        for(int i =0; i<m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({ v, wt});
            adj[v].push_back({u, wt});
            
            
        }
        
        vector<int> dist(n+1, INT_MAX);
        vector<bool> explored(n+1, false);
        vector<int> parent (n+1, -1);
        
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        //this pair contains the distance and the node
        
        dist[1] = 0;
        
        pq.push({0,1});
        
        while(!pq.empty()){
            
            int node = pq.top().second;
            pq.pop();
            
            if(explored[node]) continue;
            
            explored[node] = 1;
            
            for(int i=0;i<adj[node].size(); i++){
                
                int neighbour = adj[node][i].first;
                int weight = adj[node][i].second;
                
                //relaxation
                
                if(!explored[neighbour] && weight+ dist[node] < dist[neighbour]){
                    dist[neighbour] = weight+ dist[node];
                    pq.push({dist[neighbour], neighbour});
                    parent [neighbour] = node;
                }
                
            }
        }
        
        
        if (parent[n] == -1) return {-1};
        
        vector<int> path;
        int v = n;
        
        while(v != -1){
            
            path.push_back(v);
            v = parent[v];
        }
        
        path.push_back(dist[n]);
        reverse(path.begin(), path.end());
        
        return path;
    }
};