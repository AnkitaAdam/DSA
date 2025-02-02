class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        

        //topological sorting

        //build the graph first:

        unordered_map<int, vector<int>>  graph;

        for(auto edge: prerequisites ){
            
            int u= edge[0];
            int v= edge[1];

            graph[u].push_back(v);
            

        }

        //now calculate the indegree

        vector<int> inDegree(numCourses, 0);

        for(int i=0;i<numCourses;i++){

            for(int j=0; j<graph[i].size(); j++){

                inDegree[graph[i][j]]++;
            }
        }

        int count=0;
        queue<int> qu;

        for(int i=0; i<numCourses; i++){
            if(! inDegree[i]) {
                qu.push( i );
                count++;

            }
        }

        while(! qu.empty()){

            int node = qu.front();
            qu.pop();

            for(int i=0; i<graph[node].size(); i++){

                inDegree[graph[node][i]]--;
                if(!inDegree[graph[node][i]] ) {
                    qu.push(graph[node][i]);
                    count++;
                }
            }
        }

        return count==numCourses;

    }
};