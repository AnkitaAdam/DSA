class Solution {
    public:
    
    
      // Function to find sum of weights of edges of the Minimum Spanning Tree.
      
      
      
      int findParent(int u, vector<int> &parent){
          if(u == parent[u])
              return u;
          
          return parent[u] = findParent(parent[u], parent); // path compression for finding the ultimate parent of node...(topmost parent)
      }
      
      void unionByRank(int u, int v, vector<int>&rank, vector<int> &parent){
          
          int pu = findParent(u, parent);
          int pv = findParent(v, parent);
          
          int rankU = rank[pu];
          int rankV = rank[pv];
          
          if(rankU > rankV){
              
              parent[pv] = pu;
              
          }else if(rankU < rankV){
              
              parent[pu] = pv;
              
          }else{
              
              parent[pv] = pu;
              rank[pu]++;
              
          }
          
          
      }
      int spanningTree(int V, vector<vector<int>> adj[]) {
          // code here
          
          // //{wt{node,parent}}
          // priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;
          
          // vector<int> isMST(V,0);
          // vector<int> parent(V); //useful for constructing the graph + returning weight...here im taking it as additional
          
          // pq.push({0,{0,-1}});
          
          // int cost =0;
          
          
          // while(!pq.empty()){
              
          //     int weight = pq.top().first;
          //     int node = pq.top().second.first;
          //     int par = pq.top().second.second;
              
          //     pq.pop();
              
          //     if(!isMST[node]){
                  
          //         isMST[node]=1;
          //         cost+= weight;
          //         parent[node] = par;
                  
          //         for(int j=0;j<adj[node].size();j++){
          //             if(!isMST[adj[node][j][0]]){
          //                 pq.push({adj[node][j][1], {adj[node][j][0], node}});
          //             }
          //         }
                  
                  
          //     }
          
          // }
          
          // return cost
          
          
          //kruskal alggorithm..
          
          vector<pair<int, pair<int,int>>> temp;
          for(int i=0;i<V;i++){
              for(int j=0;j<adj[i].size();j++){
                  
                  temp.push_back({adj[i][j][1], {i, adj[i][j][0]}});
                  
              }
          }
          
          priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>> , greater<pair<int, pair<int,int>>> > pq(temp.begin(), temp.end());
          vector<int> parent(V);
          vector<int> rank(V,0);
          for(int i=0;i<V;i++){
              parent[i]=i;
          }
          
          int cost =0;
          int edges=0;
          
          while(!pq.empty()){
              
              
              int wt = pq.top().first;
              int u = pq.top().second.first;
              int v = pq.top().second.second;
              pq.pop();
              
              if(findParent(u,parent) != findParent(v,parent)){
                  
                  cost+=wt;
                  unionByRank(u,v,rank,parent);
                  edges++;
                  
                  
              }
              
              if(edges==V-1) break;
              
          }
          
          return cost;
          
          
      }
  };