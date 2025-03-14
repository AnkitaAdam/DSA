class Solution {
    public:
      void DFS(int node, vector<int> &visited, vector<int> adj[]){
          visited[node] = 1;
          for(int i=0;i<adj[node].size(); i++){
              if(!visited[adj[node][i]]){
                  DFS(adj[node][i], visited, adj);
              }
          }
      }
      int isCircle(vector<string> &arr) {
          // code here
          
          //use the concept of euler circuit...if we end up with cycle we say ki there exists a circle of string
          //but i know ki euler circuit for undirected graph --> checking no of odddegrees shd be 0
          //but in case of directed graph...check the indegree of a node nust be equals to the outdegree of a node...
          
          //and here we take only the first and last letter and converting the letter to integer by -'a'
          //and constructing the graph...eventually will hen check for the euler circuit....
          
          //and that's it..yayyyyy it's done..
          
          //lets start for code..
          
          vector<int> adj[26];
          vector<int> inDegree(26,0);
          vector<int> outDegree(26,0);
          for(int i=0;i<arr.size();i++){
              
              string temp = arr[i];
              
              int u = temp[0]-'a';
              int v = temp[temp.size()-1] - 'a';
              adj[u].push_back(v);
              
              inDegree[v]++; //edge is coming to v
              outDegree[u]++; //edge is going from u
              
          } //...ye hogya graph creation..and calculating the indegree and outdegree of each node..
          
          //now its time to final step --> check fr the circle exists or not...by eulercircuit..
          
          for(int i=0;i<26;i++){
              if(inDegree[i] != outDegree[i]) return 0;
          }
          
          //now,,the game is not over yet...
          //check all the edges should be part of one component..for that perform DFS
          
          int node = arr[0][0] - 'a'; //any start node to start dfs
          vector<int> visited(26,0);
          DFS(node, visited, adj);
          
          for(int i=0;i<26;i++){
              if((inDegree[i]||outDegree[i]) && !visited[i])
                  return 0;
          }
          
          return 1;
          
      }
  };