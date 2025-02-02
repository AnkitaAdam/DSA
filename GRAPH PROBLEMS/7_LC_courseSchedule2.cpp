class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        


        unordered_map<int, vector<int>> graph;
        vector<int> inDegree(numCourses, 0);
        
        for(auto edge: prerequisites){

            int u = edge[0]; 
            int v = edge[1];
            graph[v].push_back(u);
           
        }

        for(int i=0;i<numCourses;i++){

            for(int j=0; j<graph[i].size(); j++){

                inDegree[graph[i][j]]++;
            }
        }

        vector<int> ans;
        queue<int> qu;

        for(int i=0;i<numCourses; i++){

            if(!inDegree[i]) {
                qu.push(i);
                ans.push_back(i);
            }

        }

        while(!qu.empty()){

            int node = qu.front();
            qu.pop();
            for(int i=0; i<graph[node].size();i++){

                inDegree[graph[node][i]]--;
                if(!inDegree[graph[node][i]]){
                    qu.push(graph[node][i]);
                    ans.push_back(graph[node][i]);
                }

            }
        }

        return (ans.size()!=numCourses) ? vector<int>() :ans;
    


    }
};