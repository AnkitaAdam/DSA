class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node, vector<vector<int>>&adj, vector<bool>&visited,  vector<int> &ans){
        
        visited[node] =1;
        ans.push_back(node);
        
        for(int j=0; j<adj[node].size(); j++){
            
            if(!visited[adj[node][j]]){
                
                dfs(adj[node][j], adj, visited, ans);
                
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        
        vector<int> ans;
        vector<bool> visited(adj.size(), 0);
        
        
        dfs(0, adj, visited,ans);
        
        return ans;
    }
};