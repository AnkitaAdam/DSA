class Solution {
    public:
      // Function to find sum of weights of edges of the Minimum Spanning Tree.
      int spanningTree(int V, vector<vector<int>> adj[]) {
          // code here
          
          //{wt{node,parent}}
          priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;
          
          vector<int> isMST(V,0);
          vector<int> parent(V); //useful for constructing the graph + returning weight...here im taking it as additional
          
          pq.push({0,{0,-1}});
          
          int cost =0;
          
          
          while(!pq.empty()){
              
              int weight = pq.top().first;
              int node = pq.top().second.first;
              int par = pq.top().second.second;
              
              pq.pop();
              
              if(!isMST[node]){
                  
                  isMST[node]=1;
                  cost+= weight;
                  parent[node] = par;
                  
                  for(int j=0;j<adj[node].size();j++){
                      if(!isMST[adj[node][j][0]]){
                          pq.push({adj[node][j][1], {adj[node][j][0], node}});
                      }
                  }
                  
                  
              }
          
          }
          
          return cost;
      }
  };